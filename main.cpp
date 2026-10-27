#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int n : nums) {
        sum += n;
    }
    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Compiler OK!" << std::endl;
    return 0;
}