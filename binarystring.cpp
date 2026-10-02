#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        if (a.size() == 0) {
            return b;
        }
        if (b.size() == 0) {
            return a;
        } 

        bool carry = false;
        string bit;  //final result
        char result; //result inputting in bit every loop
        char fora; //input from a
        char forb; //input from b
        

        while (!a.empty() || !b.empty() || carry) { //complimentary logic important
            if (!a.empty()) {
                fora = a.back();
                a.pop_back();
            }
            else {
                fora = '0';
            }

            if (!b.empty()) {
                forb = b.back();
                b.pop_back();
            }
            else { 
                forb = '0';
            }

            if (!carry) {
                if (fora == '0' && forb == '0') {
                    result = '0';
                    carry = false;
                }
                else if (fora == '1' && forb == '1') {
                    result = '0';
                    carry = true;
                }
                else {
                    result = '1';
                    carry = false;
                }
            }
            else {
                if (fora == '0' && forb == '0') {
                    result = '1';
                    carry = false;
                }
                else if (fora == '1' && forb == '1') {
                    result = '1';
                    carry = true;
                }
                else {
                    result = '0';
                    carry = true;
                }
            }

            bit.push_back(result);
        }
        std::reverse(bit.begin(), bit.end());
        return bit;
    }

};

int main() {
    Solution sol;
    
    string a1 = "11001", b1 = "10000000";
    cout << std::string(sol.addBinary(std::string(a1), std::string(b1))) << endl;
    
    return 0;
}