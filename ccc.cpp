#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::vector<std::string> words;
    std::string word;
    for (char c : input) {
        if (std::isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }


    std::sort(words.begin(), words.end());
    for (std::string w : words) {
        std::cout << w << std::endl;
    }

    return 0;
}
