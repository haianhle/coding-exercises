"""
Problem:
Given an array of integers, return indices of the two numbers 
such that they add up to a specific target.
"""

def twoSum(nums, target):
    for i in range(len(nums)):
        for j in range(len(nums)):
            if (j > i and nums[i]+nums[j] == target):
                return (i, j)


# Test case:
# Give nums = [3, 2, 7, 4], target = 6,
# Return [1, 3] because nums[1] + nums[3] = 6

nums = [3, 2, 7, 4]
target = 6
print("Answer = ", twoSum(nums, target))
