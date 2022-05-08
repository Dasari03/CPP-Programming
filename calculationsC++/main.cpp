#include <iostream>

int main(){
   
    //addition
    int num1 {100};
    int num2 {200};
    int num3 {300};
    int sum {num1 + num2};
    int sum_another = num1 + num2 + num3;
    std::cout<<"Sum is " << sum <<std::endl;
    std::cout<<"Another Sum is "<< sum_another <<std::endl;

    //substraction
     sum = num1 - num2;
     sum_another = num1 - num2 - num3;
    std::cout<< "Sum is " << sum << std::endl;
    std::cout<< "Another sum is " << sum_another << std::endl;


    //multiplication
    sum = num1 * num2 * num3;
    sum_another = num1 * num1 * num2 * num3;
    std::cout<< "Sum is " << sum << std::endl;
    std::cout<< "Another sum is " << sum_another << std::endl;


    //division
    sum = num1 / num2 / num3;
    sum_another = num3 / num2 / num1;
    std::cout<< "Sum is " << sum << std::endl;
    std::cout<< "Another sum is " << sum_another << std::endl;

    //modulo
    sum = num1 % num2;
    sum_another = num2 % num3;
    std::cout<< "Sum is " << sum << std::endl;
    std::cout<< "Another sum is " << sum_another << std::endl;


}