#include <iostream>
#include <algorithm>

bool isAnagram(const std::string& s, const std::string& t) {
    // Check if the sorted versions of the strings are equal
    std::string sorted_s = s;
    std::string sorted_t = t;

    std::sort(sorted_s.begin(), sorted_s.end());
    std::sort(sorted_t.begin(), sorted_t.end());

    return sorted_s == sorted_t;
}

int main() {
    std::string s1 = "anagram";
    std::string t1 = "nagaram";
    std::cout << "\"" << s1 << "\" و \"" << t1 << "\" هما أناغرام: " << std::boolalpha << isAnagram(s1, t1) << std::endl;

    std::string s2 = "rat";
    std::string t2 = "car";
    std::cout << "\"" << s2 << "\" و \"" << t2 << "\" ليستا أناغرام: " << std::boolalpha << isAnagram(s2, t2) << std::endl;

    return 0;
}
