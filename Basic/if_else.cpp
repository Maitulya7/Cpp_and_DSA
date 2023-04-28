#include<iostream>
using namespace std ;

int main(){
    int a , b , c ;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a <<endl;10;
        }else {
            cout<<c<<endl;
        }
    } else if (b>a){
        if(b>c){
            cout<<b<<endl;
        } else {
            cout<<c<<endl;
        }
    }

    int number ;
    cin >> number;

    if( number % 2 == 0){
        cout<<"even"<<endl;
    }else {
        cout<<"odd"<<endl;
    }

    return 0 ;
}