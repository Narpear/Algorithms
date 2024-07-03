# Moore's algorithm is used to find the majority element in an array. 
# It is assumed that an element appears at least floor(n/2) times in the array.

from typing import List
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # moore's majority voting algorithm
        count = 0
        element = 0
        for number in nums:
            if count==0:
                element = number
            if number==element:
                count += 1
            else:
                count -= 1
            
        return element