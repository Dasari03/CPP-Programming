#include <iostream>

int main(){
    unsigned int i{10};
    const unsigned int COUNT{12};
    do{
        std::cout << "This is from do while loop..." << std::endl;
        i++;
    }while(i < COUNT );
}

// do while loop will execute at least once no matter what. It is because the testing will be done after the body.