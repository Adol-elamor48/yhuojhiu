#include <iostream>
#include <string>

int lengthOfLastWord(const std::string& s) {
    int length = 0;
    bool foundWord = false;

    // Iterate through the characters from the end of the string
    for (int i = s.length() - 1; i >= 0; --i) {
        // If a non-space character is encountered, start counting the length
        if (s[i] != ' ') {
            foundWord = true;
            ++length;
        }
        else {
            // If a space is encountered after the word, break the loop
            if (foundWord) {
                break;
            }
        }
    }

    return length;
}

int main() {
    // Example usage
    std::string input1 = "Hello World";
    std::string input2 = "   fly me   to   the moon  ";
    std::string input3 = "luffy is still joyboy";

    std::cout << "Example 1 Output: " << lengthOfLastWord(input1) << std::endl;
    std::cout << "Example 2 Output: " << lengthOfLastWord(input2) << std::endl;
    std::cout << "Example 3 Output: " << lengthOfLastWord(input3) << std::endl;

    return 0;
}
