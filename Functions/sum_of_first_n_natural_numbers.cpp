
#include<iostream>
using namespace std;

int sum(int a){
    int sum=0;
    for(int i=0 ; i<=a ; i++){
        sum +=i;
    }
    return sum;
}


int main(){
    int a;
    cout<<"Enter the number you want to add: ";
    cin>>a;
    cout<<"The total sum of first "<<a<<" natural number is: "<<sum(a)<<endl;
}