/*****************************************************************************************
* Author : Abin S
* Date   : 09.11..2026
* File name : introcuction.cpp
* Description : Deals with basic Cpp syntaxxes, std, cin, cout.
*               These programs are not under any license.
*
*****************************************************************************************/

#include <iostream> // .h is not necessary in C++. According to the standardization 
                    // in C++ all the standard Libraris are moved to "std" namespaces
#include <string>   // This is used for string operations like concatenation, length stc.
#include <cmath>    // This is used for mathematical functions like pow, sqrt, sin, cos etc.

int main()
{
    /*Variable declaration Section / Integer data type stores the whole Number*/
    int x = 10; // Declaration with assiginment
    int y;      // Declaration 
    y = 6;      // Assignement Seperately
    int age = 38;
    int year = 2026;
    /* Number including Decimal */
    double pi = 3.14159;
    double price = 22.50;
    double temperature = 27.5;
    /* Single Character */
    char grade = 'A';
    char initial = 'C';
    char standard = 'F';
    /* Boolean variable ( It can represent either True / False)*/
    bool gender = true;
    bool power_status = true;
    bool lie_status = false;
    /*String Constructor- object that represents a sequence of Text*/
    std::string Name = "Abin";
    std::string day = "Monday";
    std::string email = "abin@example.com";
    /*Any variable We donot want to chnage then we can use "const" */
    const double VELOCITY_OF_LIGHT = 3.8e8; // m/s -> Normally we will use Uppercase letters for the constant variable declaration.
    const int SIXTEEN_BIT = 65536; // 2^16  (0-65535)


    /*The following lines can be used for printing a message in the output console.
      User can use either '\n' or "std::endl" for printing a new line 
      Better way to use std::endl for the new line printing because,
      this will be flushed out the data from the output buffer.
      '\n' will not do that.
    */
    //std::cout << "This is a C++ programming Tutorial "<< '\n';
    std::cout << "____This is a C++ programming totorial_____ "<< std::endl;
    std::cout << "****We are going to start the Coding!!*****"<< std::endl;
    std::cout << "My name is "<<Name<< " and my email id is "<<email<<std::endl;
    std::cout << "The Integers are x= "<< x << ", y = "<<y<<", age = "<<age<<", year = "<<year<<std::endl;
    std::cout << "The temperature is : "<<temperature<<std::endl;
    std::cout << "The Area of Circle is : " << pi*2*3*3<<std::endl;
    std::cout << "The Grade of the Student is: "<<grade<<std::endl;
    std::cout << " The initial of the Name is : "<<initial<<std::endl;
    std::cout << "The gender of the Student is Male : "<<gender<<std::endl;
    std::cout << "The current power failure status is : "<< power_status<<std::endl;
    return 0;
}