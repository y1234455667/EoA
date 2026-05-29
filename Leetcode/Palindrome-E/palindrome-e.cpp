#include <vector>
#include <iostream> // for keeping vs gods happy

class Solution {
    
    public:

    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        std::vector<int> digits;
        
        while (x > 0 ) {
            digits.push_back(x % 10);
            x /= 10;
        }

        int n = digits.size();
        
        for (int i = 0; i < n/2; i++) {
            if (digits[i] != digits[n - i - 1]) {
                return false;
            }
        }
        return true;
        };
};



