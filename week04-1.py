#week04-1.py�G�X�@
#Leetcode 2579
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0 #�j��e��,ans���M��
        for i in range(1,n*2, 2):
            ans+=i #��o��1,3,5,7�[�Jans
        for i in range(1,n*2-1,2):
            ans+=i #��o��1,3,5,�[�Jans
        return ans
