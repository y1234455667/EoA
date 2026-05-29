#include <iostream>

int main() {
    int j = 0;
    while (j < 100000000) {
        j++;
    }
    std::cout << "j =" << j << std::endl;
    return 0;
}
