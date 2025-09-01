#include <iostream>
int main() {
    char letter;
    int i = 0;
    int j ;
    std::string statement;
    std::cout<<"Please enter a line of text : ";
    std::getline(std::cin, statement);
    std::cout<<"Please enter the shift in alphabets : ";
    std::cin>>j;
    while (j>26) {
        j=j-26;
    }
    while (i<statement.length()) {

        letter = statement.at(i);
        if(int(letter)+j>122){
            letter=letter+j-26;
             std::cout<<char(letter);
            }
        else if (int(letter)+j>90 && int(letter)<91){
            letter=letter+j-26;
            std::cout<<char(letter);
        }

        else if (int (letter)==32) {
            std::cout<<char(letter);
        }
        else {
                letter = letter+j;
                std::cout<<char(letter);
            }
        i=i+1;
        }
}
