#include <iostream>
#include <cmath>

int main() {
    int n = 10; // Adjust this value to change the size of the heart

    for (int i = n; i >= -n; i--) {
        for (int j = -2 * n; j <= 2 * n; j++) {
            double d = std::sqrt(std::pow(i, 2) + std::pow(0.5 * j, 2));
            if (d < n + 0.5) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}