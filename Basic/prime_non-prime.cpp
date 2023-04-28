/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include<cmath>

using namespace std;

int main()
{
 // check number is prime or not 
 
 int n;
 cout<<"Enter the number here: ";
 cin>>n;
 bool flag=0;
 
 for(int i=2 ; i<=sqrt(n) ; i++){
     if(n%i ==0){
         cout<<"is non prime";
         flag=1;
         break;
     }
 }
 
    if(flag==0){
         cout<<"is the prime number";
    }
     

    return 0;
}