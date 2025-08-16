#include <iostream>

int main() {
    char letter;
    int i = 0;
    std::string statement;
    std::cout<<"Please enter a line of text : ";
    std::getline(std::cin, statement);
    while (i<statement.length()) {
        letter = statement.at(i);
        i=i+1;
        if (int(letter) == 32 ) {
            std::cout<<letter;
        }
        if (int(letter) == 121 ) {
            std::cout<<"a";
        }
        else if (int(letter) == 122 ) {
            std::cout<<"b";
        }
        else {
            letter = letter-2;
            std::cout<<char(letter);
        }
    }
    return 0;
}