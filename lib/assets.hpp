#include <iostream>
#include <vector>
#include <conio.h>
#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

class Assets {
public:
    void heading(std::string text, char sign) {
        int textSize = text.length();
        int totalPadding = 16;
        int iteration = textSize + totalPadding;

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < iteration; j++) {
                if(i == 1) {
                    int halfPadding = totalPadding / 2;
                    std::cout << ((j+1) > halfPadding && (j) < iteration-halfPadding ? text[j-halfPadding] : ' ');
                }
                else
                    std::cout << sign;
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
    }

    void pressAnyKey(std::string text) {
        std::cout << text;
        char key = _getch();
        std::cout << std::endl;
    }

    template<typename T>
    T input(std::string text) {
        T value;
        std::cout << text;
        std::getline(std::cin, value);

        return value;
    }

    void showTable(std::vector<std::vector<std::string>>& data) {
        if(data.empty())
            return;
    }
};