#include<iostream>
#include<string>
using namespace std;

string decimalToOctal(int n){
    string binary ="";
    while (n > 0)
    {
        int reminder = n%8;
        binary = to_string(reminder) + binary;
        n /=8;
    }
    return binary;
}

int main(){
    int n ;
    cout<<"ENTER THE DECIMAL NUMBER YOU WANT TO CHANGE INTO OCTAL: ";
    cin>>n;

    cout<<"YOUR DECIMAL NUMBER "<<n<<" OCTAL IS: "<<decimalToOctal(n)<<endl;
}