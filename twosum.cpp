#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int nums[10];
    
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    int t;
    std::cin >> t;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[i] + nums[j] == t) {
                std::cout << i << " " << j << std::endl;
            }
        }
    }
    return 0;

}