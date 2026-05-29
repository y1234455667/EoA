#include <iostream> //to keep the vs code happy
#include <vector>
#include <string>

class Solution {
    public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) { //string exist in std namespace, you can't access it by just typing string. and, the premade function in leetcode already has a vector of string elements named strs, so I HAVE to do it that way
        if (strs.empty()) { //palindrome question's logic again, if the string is invalid, you remove it before it is compiled
            return "";
        }
        std::string prefix = ""; //prefix is defined.

        int n = strs[0].size(); //the size of first string, perCHANCE the longest, is taken as a standard fixed string size to compare with the other strings in the vector, if the size of the first string is smaller than the other strings, then there is no common prefix at all, and if it is larger than the other strings, then there is no common prefix at all, so it is a good standard to compare with

        for (int j = 0; j < n; j++) {
            char c = strs[0][j]; //for increasing j, have solidified a character c alternates on first strings letters, so that the rest can be checked on the first
            
            for (int i = 0; i < strs.size(); i++) { //now creating a loop to check i where i will be going to rest of strs elements
                if (j >= strs[i].size() || strs[i][j] != c) { //creating a complementary if. if j is larger than current strs string OR current letter of chosen string from strs doesn't match c, we end the loop
                    return prefix;
                }
            }
            prefix += c; //prefix is kept added on, expected.

        }
        return prefix; //if the loop is ended, then the prefix is returned, which is the longest common prefix
    }
};
