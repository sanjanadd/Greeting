#include <iostream>
#include <string>

int main () {
    //declaring a string variable
    std::string name;

    //prompting user to enter their name
    std::cout << "Enter your name: ";
    //reading user input
    std::cin >> name;

    //outputting the greeting
    std::cout << "It is nice to meet you, " << name << "!" << std::endl;

    return 0;
}

