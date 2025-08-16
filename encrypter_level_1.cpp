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
            if (int(letter) == 121 ) {
                std::cout<<"a";
            }
            else if (int(letter) == 122 ) {
                std::cout<<"b";
            }
            else if (int(letter) == 89) {
                std::cout<<"A";
            }
            else if (int(letter) == 90 ) {
                std::cout<<"B";
            }
            else {
                letter = letter+2;
                std::cout<<char(letter);
            }
        }
        else {
                std::cout<<letter;
            }
    }
}