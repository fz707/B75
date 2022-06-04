from typing import List


class Solution:
    def anagramMappings(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d1 = dict(zip(nums2, range(len(nums2))))
        print(d1)
        li = []
        for i in nums1:
            if i in d1.keys():
                li.append(d1[i])
        return li


num3 = Solution().anagramMappings(
    nums1=[12, 28, 46, 32, 50], nums2=[50, 12, 32, 46, 28])

print(num3)
