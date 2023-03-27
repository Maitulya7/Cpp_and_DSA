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
 // check if given number is armstrong number or not 
 
 int n;
 cout<<"Enter you number here: ";
 cin>>n;
 int original_n = n;
 
 
 int sum = 0;
 
 while(n>0){
    int lastdigit = n%10;
    sum += pow(lastdigit,3);
    n = n/10; 
 }
 
 if(original_n == sum){
    cout<<"This number is armstrong number"<<endl;; 
 }else{
     cout<<"This number is not armstrong number"<<endl;;
 }
 
 

 
     

    return 0;
}