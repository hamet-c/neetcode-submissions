class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:
        res = []

        temp = []
        def back(num):
            if num >= len(nums):
                res.append(temp.copy())
                return

            temp.append(nums[num])
            back(num + 1)

            temp.pop()
            back(num + 1)
        back(0)
        return res
