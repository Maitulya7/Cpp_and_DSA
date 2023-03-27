/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include<cmath>
#include<math.h>

using namespace std;

int main()
{
 // find the given number factorial
int number1;

cout<<"Enter the first number1: ";
cin>>number1;


int fact1 =1;
for(int i = 2 ; i<=number1 ; i++){
    fact1 = fact1 *i;
}


 cout<<"The factorial of "<<number1<<" is "<<fact1;
 
     

    return 0;
}