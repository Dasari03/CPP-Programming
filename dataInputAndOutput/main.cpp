#include <iostream>
#include <string>

int main(){
   std::string lastName;
   std::string fullName;
   int age;
  /* std::cout << "Please type your last name and age : " << std::endl;
   std::cin >> lastName >> age;
   std::cout << "Hello Mr. " << lastName << "! You must be " << age <<"years old. Welcome!" << std::endl;
   std::cerr << "This is for error message print out" << std::endl;
   std::clog << "This is nothing but clog message" <<std::endl;
   */
   std::cout << "Please type your full name and your age : " << std::endl;
   std::getline(std::cin, fullName);
   std::cin >> age;
   std::cout << "Hello, your name must be " << fullName << ". You must be " 
   << age <<"years old. Pleasure meeting you."<< std::endl;

}