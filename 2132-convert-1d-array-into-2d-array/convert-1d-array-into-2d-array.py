import numpy as np
class Solution(object):
    def construct2DArray(self, original, m, n):
        """
        :type original: List[int]
        :type m: int
        :type n: int
        :rtype: List[List[int]]
        """
        if(len(original)!=(m*n) ):
            return []
        r=[] 

        for i in range(0,len(original),n):
            r.append(original[i:n+i])

        return r    


        


        

        

        
        