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
 // revers a given number
 
 int n;
 cout<<"Enter the number you want to revers here: ";
 cin>>n;
 int revers;
 
 while(n>0){
     int lastdigit = n%10;
     revers = revers*10 + lastdigit;
     
     n = n/10;
 }
 
 cout<<revers<<endl;
 
     

    return 0;
}