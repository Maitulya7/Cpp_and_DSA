// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    // increment decrement operators 
  int a = 10;
  int b ;
  b =++a;
  cout<<a <<endl;
  cout<<b <<endl;
  
  int c = 10;
  int d ;
  
  d = c++;
  cout<<c<<endl;
  cout<<d<<endl;
  
  int i = 1;
  int j = 2;
  int k ;
  
  // 1 + 1 + 2 + 2 + 3 + 4 = 14
  
  k = i + i++ + j + j++ + ++i + ++j;
  
  cout <<"value of k is : "<< k <<endl;
  cout <<"value of i is : "<<i <<endl;
  cout<<"value of j is : "<<j <<endl;
  
  
  // relation operators 
  
int number1 ;
int number2 ;

cout<<"Enter the numbner1: ";
cin>>number1;

cout<<"enter the number2: ";
cin>>number2;
  
  if(number1 == number2){
      cout<<"number1 and 2 are same"<<endl;
  }
  if(number1 < number2){
      cout<<"number1 is less then 2"<<endl;
  }
  if(number1 > number2){
      cout<<"number1 is greater then 2"<<endl;
  } 
  if(number1  != number2){
      cout<<"number1 and 2 are not same "<<endl;
  }
  
  
// logical operators 

if (number1 && number2 == 10){
    cout<<"number1 and number2 both are 10";
}

if(number1 || number2 == 11){
    cout<<"one of number is 11";
}
// miscellanenous


    return 0;
}
