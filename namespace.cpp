/*****************************************************************************************
* Author      : Abin S
* Date        : 10.11..2026
* File name   : namespace.cpp
* Description : This file explains about the importance of namespace and its usage.
*               "namespace" in C++ is a solution for preventing name conflicts of entities in large projects. 
*               In verey C++ program we can see "using namespace std". This line is used to skip the "std" from the standard library.
*               While using the line , the programmer can able to access 100's of functions from std library without using std::.
*               likewise we can use same variable's different versions using different namespaces.
*               This is veru useful in large projects where multile developers are working on same project and they can use the same.
*****************************************************************************************/

#include <iostream> // .h is not necessary in C++. According to the standardization 
                    // in C++ all the standard Libraris are moved to "std" namespaces
#include <string>   // This is used for string operations like concatenation, length stc.
#include <cmath>    // This is used for mathematical functions like pow, sqrt, sin, cos etc.

using namespace std;  // using this line we can avoid "std::" from the code. "::" is called scope resolution operator.

namespace xValOne {
    int x = 10;
}

namespace xValTwo {
    int x = 20;
}



int main()
{
    using namespace xValOne;
    using namespace xValTwo;
    int x = 50;             // If the name space is not specified the this local value will be taken as default value.

    cout << "Value of x (1-> Local) = "<< x <<endl;
    cout << "Value of x (1-> under namespace xValOne)= "<< xValOne::x <<endl;
    cout << "Value of x (1-> under namespace xValTwo) = "<< xValTwo::x<<endl; 
    /* commented out "using namespace std" and test the following */
    std::cout << "Value of x (2-> local) = "<< x<<std::endl;
    std::cout << "value of x (2-> under namespace xValueOne) = " << xValOne::x << std:: endl;
    std::cout << "value of x (2-> under namespace xValueTwo) = " << xValTwo::x << std:: endl;

    return 0;
}
