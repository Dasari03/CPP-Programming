#include <iostream>

int main(){
    char randomCharacter = 97;
    std::cout << "randomCharacter's ASCII value : " << randomCharacter << std::endl;
    std::cout << "randomeCharacter's ASCII integer value : " << static_cast<int>(randomCharacter) << std::endl;
    return 0;
}