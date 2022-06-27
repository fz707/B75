from typing import List
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        number=-1
        left,right=0,len(nums)-1
        while left<=right:
            if nums[left]==target:
                return left
            if nums[right]==target:
                return right
            left+=1
            right-=1
        return number
    
    
num1= Solution().search(nums=[12, 28, 46, 32, 50],target=46)

print(num1)
