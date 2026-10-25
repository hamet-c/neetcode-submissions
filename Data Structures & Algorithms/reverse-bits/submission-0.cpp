class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
                unsigned int x = 0;
        unsigned num = n;
        for (int i = 0; i < 32; ++i) {
            int temp = num & 1;
            x = (x << 1) | temp;
            num = num >> 1;
        }
        return x;
    }
};
