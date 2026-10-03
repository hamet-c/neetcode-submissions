class Solution:
    def generateParenthesis(self, n: int) -> list[str]:
        open = 0
        close = 0
        res = []
        stk = []
        def gen(open, close):
            if open == n and close == n:
                res.append("".join(stk))
                return
            if open < n:
                stk.append("(")
                gen(open + 1, close)
                stk.pop()
            if close < open:
                stk.append(")")
                gen(open, close + 1)
                stk.pop()
            

        gen(open, close)
        return res