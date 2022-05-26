#include <iostream>
#include <iomanip>

int main(){
    
    //std::flush 
    // flushes the output buffer to its final destination.
    std::cout << "This is a message or data that will be flushed..." << std::endl << std::flush;
    std::cout << std::endl;
    //After this std::flush, at this line, the message or data has been sent
    //to the stream. This may be important in some application.

    //std::setw()
    //Adjust the field with for the item about to be printed.
    //The setw() manipulator only affects the next value to be printed.
    
    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" <<  " " << "Parker" << " 45" << std::endl;
    std::cout<< "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout<< "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout<<"Izaiah" << " " << "Robinson" << " 29" << std::endl;

std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    std::cout<< std::endl;
    std::cout<< "Formatted table..." << std::endl;
    std::cout<< std::setw(10) << "FirstName" << std::setw(10)  << "LastName" << std::setw(10) << "Age"  <<std::endl;
    std::cout <<std::setw(10) << "Daniel" <<  std::setw(10) << "Gray" << std::setw(10) <<" 25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)<< "Woods" << std::setw(10)<< " 33"  << std::endl;
    std::cout <<std::setw(10)<< "Jordan" << std::setw(10) << "Parker"<< std::setw(10) << " 45" << std::endl;
    std::cout<< std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(10) << " 21" << std::endl;
    std::cout<< std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(10) << " 27" << std::endl;
    std::cout<< std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(10) <<" 29" << std::endl;

    int col_width {15};
    std::cout<< std::setw(col_width) << "FirstName" << std::setw(col_width)  << "LastName" << std::setw(col_width) << "Age"  <<std::endl;
    std::cout <<std::setw(col_width) << "Daniel" <<  std::setw(col_width) << "Gray" << std::setw(col_width) <<" 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)<< "Woods" << std::setw(col_width)<< " 33"  << std::endl;
    std::cout <<std::setw(col_width)<< "Jordan" << std::setw(col_width) << "Parker"<< std::setw(col_width) << " 45" << std::endl;
    std::cout<< std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << " 21" << std::endl;
    std::cout<< std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << " 27" << std::endl;
    std::cout<< std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) <<" 29" << std::endl;
    std::cout<< "/////////////////////////////////////////////////////////////////////////" <<std::endl;
    
    //right as a default
    col_width = 22;
    std::cout<< std::right;
    std::cout<< std::setw(col_width) << "FirstName" << std::setw(col_width)  << "LastName" << std::setw(col_width) << "Age"  <<std::endl;
    std::cout <<std::setw(col_width) << "Daniel" <<  std::setw(col_width) << "Gray" << std::setw(col_width) <<" 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)<< "Woods" << std::setw(col_width)<< " 33"  << std::endl;
    std::cout <<std::setw(col_width)<< "Jordan" << std::setw(col_width) << "Parker"<< std::setw(col_width) << " 45" << std::endl;
    std::cout<< std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << " 21" << std::endl;
    std::cout<< std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << " 27" << std::endl;
    std::cout<< std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) <<" 29" << std::endl;
    std::cout<< "///////////////////////////////////////////////////////////////////////////"<<std::endl;
    std::cout<< std::endl;

    //left algined
    
    col_width = 22;
    std::cout<< std::left;
    std::cout<< std::setw(col_width) << "FirstName" << std::setw(col_width)  << "LastName" << std::setw(col_width) << "Age"  <<std::endl;
    std::cout <<std::setw(col_width) << "Daniel" <<  std::setw(col_width) << "Gray" << std::setw(col_width) <<" 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)<< "Woods" << std::setw(col_width)<< " 33"  << std::endl;
    std::cout <<std::setw(col_width)<< "Jordan" << std::setw(col_width) << "Parker"<< std::setw(col_width) << " 45" << std::endl;
    std::cout<< std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << " 21" << std::endl;
    std::cout<< std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << " 27" << std::endl;
    std::cout<< std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) <<" 29" << std::endl;
    std::cout << "////////////////////////////////////////////" << std::endl;

    //Internal justified : sign is left-justified and data is right-justified
    std::cout << "Internal jusitification" << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.456 << std::endl;
    std::cout << "//////////////////////////////////////////////// " <<std::endl;
    std::cout << std::endl;
    
    //Fill character

    col_width = 23;
    
    std::cout<< std::left;
    std::cout<< std::setfill('*');
    std::cout<< std::setw(col_width) << "FirstName" << std::setw(col_width)  << "LastName" << std::setw(col_width) << "Age"  <<std::endl;
    std::cout <<std::setw(col_width) << "Daniel" <<  std::setw(col_width) << "Gray" << std::setw(col_width) <<" 25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)<< "Woods" << std::setw(col_width)<< " 33"  << std::endl;
    std::cout <<std::setw(col_width)<< "Jordan" << std::setw(col_width) << "Parker"<< std::setw(col_width) << " 45" << std::endl;
    std::cout<< std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width) << " 21" << std::endl;
    std::cout<< std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width) << " 27" << std::endl;
    std::cout<< std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width) <<" 29" << std::endl;
    std::cout << "////////////////////////////////////////////" << std::endl;

    //boolalpha and noboolalpha : default is showing 1/0 but after initializing boolalpha, the output will be true/false
    bool some_condition {true};
    bool some_other_condition {false};
    std::cout << "some_condition : " << some_condition <<std::endl;
    std::cout << "some_other_condition : " << some_other_condition <<std:: endl;
    std::cout << std::endl;
    std::cout << "After boolalpha" << std::endl;
    std::cout << std::boolalpha;
    std::cout << "some_condition : " << some_condition << std::endl;
    std::cout << "some_other_condition : " << some_other_condition << std::endl;
    std::cout << "/////////////////////////////////////////////////////////" << std::endl;
    std::cout << std::endl;
    std::cout << std::noboolalpha;
    std::cout << "some_condition : " << some_condition << std::endl;
    std::cout << "some_other_condition : " << some_other_condition << std::endl;
    std::cout << "/////////////////////////////////////////////////////////" << std::endl;
    std::cout << std::endl;

    //showpos and noshowpos : show or hide the + sign for positive numbers

    int sample_positive_num {17};
    int sample_negative_num {-27};
    std::cout << std::showpos;
    std::cout << "sample_positive_num : " << sample_positive_num << std::endl;
    std::cout << "sample_negative_num : " << sample_negative_num << std::endl;
    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "sample_positive_num : " << sample_positive_num << std::endl;
    std::cout << "sample_negative_num : " << sample_negative_num << std::endl;
    std::cout << std::endl;

    //std::dec, std::hex, std::oct;
    //std::uppercase;
    int another_sample_num {121139};
    std::cout << "another_sample_num in dec : " << std::dec << another_sample_num << std::endl;
    std::cout << "another_sample_num in hex : " <<std::uppercase<< std::hex << another_sample_num << std::endl;
    std::cout << "another_sample_num in oct : " << std::oct << another_sample_num << std::endl;
    std::cout << std::dec;
    std::cout << std::endl;
    std::cout << "/////////////////////////////////////////////////////////////////" << std::endl;

   //fixed and scientific : for floating point values

   double a{3.141252351235123523523523152352352351};
   double b{2006.0};
   double c{1.34e-10};

   //default
   std::cout << "double a : " << a << std::endl;
   std::cout << "double b : " << b << std::endl;
   std::cout << "double c : " << c << std::endl;

   //fixed
   std::cout << std::endl;
   std::cout << std::fixed;
    std::cout << "double a : " << a << std::endl;
   std::cout << "double b : " << b << std::endl;
   std::cout << "double c : " << c << std::endl;

   //scientific
   std::cout << std::endl;
   std::cout << std::scientific;
    std::cout << "double a : " << a << std::endl;
   std::cout << "double b : " << b << std::endl;
   std::cout << "double c : " << c << std::endl;

   //back to the default => std::cout.unsetf(std::ios::scientific | std::ios::fixed); //Hack
   std::cout << std::endl;
   std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "double a : " << a << std::endl;
   std::cout << "double b : " << b << std::endl;
   std::cout << "double c : " << c << std::endl;

   //setprecision() :: the number of digits printed out for a floating point.

   a = 3.1515135354367547576586586564342314;
   std::cout << std::endl;
   std::cout << "a (defualt precision(6)) : " << a << std::endl;
   std::cout << std::setprecision(15);
   std::cout << "a (precision(10)) : " << a << std::endl;
   //if precision set is done bigger than what they can print, garbage value will be printed!!!!(15 for float)
std::cout << std::endl;

//showpoint and noshowpoint : show trailing zeros if necessary
//Force output of the decimal point

double j {34.1};
double k {101.99};
double l {12.0};
double p {45};

std::cout << j << std::endl;
std::cout << std::showpoint;
std::cout << j << std::endl;
std::cout << std::noshowpoint;
    return 0;
}