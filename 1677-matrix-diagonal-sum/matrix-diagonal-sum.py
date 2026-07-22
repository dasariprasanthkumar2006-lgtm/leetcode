class Solution(object):
    def diagonalSum(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: int
        """
        n = len(mat)
        total = 0

        for i in range(n):
            # Primary diagonal
            total += mat[i][i]

            # Secondary diagonal
            if i != n - 1 - i:
                total += mat[i][n - 1 - i]

        return total