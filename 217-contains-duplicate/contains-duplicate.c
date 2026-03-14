#include <stdlib.h>
#include <stdbool.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize) {
    if (numsSize <= 1) return false;

    // Sort the array: O(n log n)
    qsort(nums, numsSize, sizeof(int), compare);

    // Check adjacent elements: O(n)
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }

    return false;
}
