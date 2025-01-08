#include <iostream>
#include <string>

bool isPalindrome(std::string str);

int main() {

    std::string str = "mississippi";
    if (isPalindrome(str))
        std::cout << str << " is a palindrome." << std::endl;
    else
        std::cout << str << " is not a palindrome." << std::endl;


    double num; 
    double max; 
    int count = 0; 

    return 0;
} 

bool isPalindrome(std::string str) {
    size_t length = str.length();
    for (size_t i = 0; i < length / 2; i++) {
        if (str[i] != str[length -i - 1])
            return false;
    }

    return true;
}