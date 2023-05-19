#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter the first variable value: ";
    cin>>a;
    cout<<"Enter the second variable value: ";
    cin>>b;
    cout<<"Enter the operation: + , - , * , / , % :  ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        break;
    case '-':
        cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        break;
    case '/':
        cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        break;
    case '*':
        cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        break;
    case '%':
        cout<<"The modulo of "<<a<<" and "<<b<<" is "<<a%b<<endl;
        break;
    
    default:
        cout<<"Please enter the valid operation"<<endl;
        break;
    }
    
    return 0;
}