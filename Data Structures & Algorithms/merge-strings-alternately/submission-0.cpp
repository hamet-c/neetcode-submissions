class Solution {
public:
#include <numeric>
    string mergeAlternately(string word1, string word2) {
        vector<char> arr;
        string word3;
        int i = 0;
        int j = 0;
        
        while (word1.size() > i && word2.size() > j) {
            arr.push_back(word1.at(i));
            arr.push_back(word2.at(j));
            i++;
            j++;
        }




        word3 = accumulate(arr.begin(), arr.end(), string{});
        word3.append(word1, i);
        word3.append(word2, j);
        return word3;
    } 
};