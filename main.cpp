#include <iostream>
#include <vector>

bool isPalindrome(const std::string& s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        else {
            ++left;
            --right;
        }
    }
    return true;
}
