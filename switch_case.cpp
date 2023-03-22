#include<iostream>
using namespace std;

// int main(){
//     char button ; 
//     cout << "Input a charactor: ";
//     cin >> button;

//     switch (button)
//     {
//     case 'a':
//         cout<< "a"<<endl;
//         break;

//      case 'b':
//         cout<< "b"<<endl;
//         break;

//      case 'c':
//         cout<< "b"<<endl;
//         break;    
            
    
//     default:

//     cout << "i am learing "<<endl;
//         break;
//     }
// }


int main(){

    float a , b ;
    cout<<"Enter the frist number: ";
    cin>>a;
    cout << "Enter the second number: ";
    cin>>b;

    char op ; 
    cout << "Enter the operator you want to do: ";
    cin>> op ;

    switch (op)
    {
    case '+':
        cout << "The sum of a and b is ";
        cout << a+b <<endl;
        
        break;

     case '-':
        cout << "The sub of a and b is ";
        cout << a-b <<endl;
        
        break;

     case '*':
        cout << "The mul of a and b is ";
        cout << a*b <<endl;
        
        break; 


     case '/':
        cout << "The div of a and b is ";
        cout << a/b <<endl;
        
        break;

    default:

    cout << "please enter valid input";
        break;
    }

}