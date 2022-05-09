#include <iostream>

int main(){

int number1 {17};
int number2 {27};

std::cout<<std::boolalpha; //This lines let terminal to print boolean instead of 1/0;

std::cout<<"number1 > number2 : " << (number1 > number2)  << std::endl;
std::cout<<"number1 <= number2 : " << (number1 <= number2) << std::endl;

bool result = (number1 == number2);

std::cout<<number1 <<" == "<<number2 << " : " <<result << std::endl;

std::cout << std::noboolalpha; //This lines let terminal to print 1/0 instead of boolean;
std::cout<<"number1 == number2 : " << (number1 == number2) << std::endl;



}
