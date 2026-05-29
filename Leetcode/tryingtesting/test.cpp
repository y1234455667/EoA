#include <iostream>

int main() {
    int j = 0;
    while (j < 1000000) {
        j++;
    }
    std::cout << "j =" << j << std::endl;
    return 0;
}
