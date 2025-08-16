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
        if ((int(letter) > 64 && int(letter) < 91) ||
            (int(letter) > 96 && int(letter) < 123)) {
            if (int(letter) == 97 ) {
                std::cout<<"y";
            }
            else if (int(letter) == 98 ) {
                std::cout<<"z";
            }
            else if (int(letter) == 65) {
                std::cout<<"Y";
            }
            else if (int(letter) == 66 ) {
                std::cout<<"Z";
            }
            else {
                letter = letter - 2;
                std::cout<<char(letter);
            }
            }
        else {
            std::cout<<letter;
        }
    }
}