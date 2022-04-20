#include <iostream>
#include <string>

int main(){
    int num1 = 15; //Decimal
    int num2 = 017; //Octal
    int num3 = 0x0f; //Hexadecimal
    int num4 = 0b00001111; //Binary

    std::cout << "Num1 represents " << num1 << std::endl;
    std::cout << "Num2 represents " << num2 << std::endl;
    std::cout << "Num3 represents " << num3 << std::endl;
    std::cout << "Num4 represents " << num4 << std::endl;
}