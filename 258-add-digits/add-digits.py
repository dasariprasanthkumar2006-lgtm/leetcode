class Solution(object):
    def add(self,num):
        s=0
        d=0
        while num>0:
            d=num%10
            s=s+d
            num=num//10
        return s
        


    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """

        c=self.add(num)
        while c>9:
            c=self.add(c)

        return c



        
          

