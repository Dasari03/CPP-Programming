#include <iostream>

int main(){
   /*
//for loop

    //size_t : a representation of some unsigned int for positive numbers [sizes]
    for(size_t i {0}; i < 10; i++){
        std::cout<< i <<"! learning c++ is fun "<<i * 77 <<std::endl;
    }

    //figuring out the size of size_t
    std::cout <<"size of size_t : "<< sizeof(size_t) << std::endl;
  */
 //while loop
    const size_t COUNT{10};
    size_t i {0};
    while(i < COUNT) {
        std::cout<<"This is from the while loop.....!!!!!"<<std::endl;
        i++;
    }
    
    
 

    return 0;
}
