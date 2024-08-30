#include <iostream>
#include <cstdlib>
#include <ctime>

char getRandomCharacter() {
    const char characters[] = 
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "!@#$%^&*+-=?";

    int maxIndex = sizeof(characters) - 1;
    return characters[rand() % maxIndex];
}

std::string generatePassword(int length) {
    std::string password;
    for (int i = 0; i < length; ++i) {
        password += getRandomCharacter();
    }
    return password;
}

int main() {
    srand(time(0));

    int length;
    std::cout << "Enter the desired length for the password: ";
    std::cin >> length;

    std::string password = generatePassword(length);

    std::cout << "Generated password: " << password << std::endl;

    return 0;
}