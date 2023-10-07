#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string line, name, longestName;
    int maxLength = 0;
    int count = 1;

    std::cout << "5개명 이름을 ';'로 구분하여 입력하세요";
    std::getline(std::cin, line);

    std::istringstream iss(line);

    while (std::getline(iss, name, ';')) {
        std::cout << count << ": " << name << std::endl;
        if (name.length() > maxLength) {
            maxLength = name.length();
            longestName = name;
        }
        count++;
    }

    std::cout << "\n가장 긴 이름은 " << longestName << std::endl;

    return 0;
}