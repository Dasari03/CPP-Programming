#include <iostream>

int main(){
    bool is_greenLight {false};
    bool is_redLight {true};

/*

printing out a boolean
true will be printed as 1
false will be printed as 0

*/
    std::cout << "is_greenLight is " << is_greenLight << std::endl;
    std::cout << "is_redLight is " << is_redLight << std::endl;
    std::cout << std::endl;
    std::cout << "---------------------------------------------------------------- \n";

    //if you want to print out true/false instead of 1/0 follow the below.
    std::cout << std::boolalpha;
    std::cout << "is_greenLight is " << is_greenLight << std::endl;
    std::cout << "is_redLight is " << is_redLight << std::endl;
    std::cout << std::endl;
    if(is_greenLight == true) {
        std::cout << "It is a green light, you may pass now! \n";
        std::cout << "bye";
    } else {
        std::cout << "It is not a green light. You may not pass now! Wait on!"<< std::endl;
    }

    std::cout << "----------------------------------------------------------------- \n";

    if(is_redLight){
        std::cout << "It is red light now, No one moves!!!!!!!";
    }else {
        std::cout << "It is green light. You can pass now:)";
    }
}