#include <string> 
#include <iostream>


class Solution { 
public:
    int strStr(std::string haystack, std::string needle) {
        int N = haystack.size();
        int n = needle.size(); //we are defining the size of both strings. in hopes that if we have to run them, we'll be able to counter going past N-n for str needle.

        if (n == 0) {
            return 0;
        }; //if needle is not a full string, then it returns zero, cause well, no string value could pe present in EVERY haystack.
        
        if (N == 0) {
            return -1;
        }; //if haystack doesn't exist, that means there's no needle to match it, thus no matching letters. 

        for (int i = 0; i <= N - n; i++) {
            int j = 0; //for i, not going past the obvious boundary of N-n, j stays zero, unless changed. meaning, we are only going to use it for haystack.

            while (j < n && haystack[i+j] == needle[j]) {
                j++; //"WHILE j stays less than needle's size, and i rounds thourgh haystack, for every j, haystack and neelde's elements are being compared." aka, if i = 0 in overall loop, and j =0, then haystack and needle are compared on 0th elements. but, if j =1, then their both 1st elements are being compared. if i was 1 as well, and j =0, then haystack's first is now being compared with needle's zeroth. going through every haystack letter with i, while going through needle with j. 
            }

            if (j == n) {
                return i; //and finally if j is equal to n, then return i, loop breaks for that i, since we didn't find anything. 
            }

        }
        return -1; //if nothing satisified.
    }
};

//what we did in this code was we defined the size of both strings, and then we ran through haystack with i, and for every i, we ran through needle with j, comparing the two. if they were equal, then we kept going until we either found a mismatch, or we found the whole needle in haystack. if we found the whole needle, then we returned the index of haystack where it started. if we found a mismatch, then we broke out of the inner loop and continued with the next i in haystack. if we went through all of haystack without finding the needle, then we returned -1.
