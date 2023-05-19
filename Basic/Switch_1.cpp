#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the amount: ";
    cin>>n;
    
    switch (n>=2000)
    {
    case 1:
        cout<<"you need "<<n/2000<<" note of 2000"<<endl;
        n -= 2000 * (n/2000);
        break;
    }

    switch (n >= 500)
    {
    case 1:
        cout<<"you need "<<n/500<<" note of 500"<<endl;
        n -=500 * (n/500);
        break;
    
    }
    switch (n >= 200)
    {
    case 1:
        cout<<"you need "<<n/200<<" note of 200"<<endl;
        n -=200 * (n/200);
        break;
    
    }
    switch (n >= 100)
    {
    case 1:
        cout<<"you need "<<n/100<<" note of 100"<<endl;
        n -=100 * (n/100);
        break;
    
    }
    switch (n >= 50)
    {
    case 1:
        cout<<"you need "<<n/50<<" note of 50"<<endl;
        n -=50 * (n/50);
        break;
    
    }
    switch (n >= 20)
    {
    case 1:
        cout<<"you need "<<n/20<<" note of 20"<<endl;
        n -=20 * (n/20);
        break;
    
    }
    switch (n >= 10)
    {
    case 1:
        cout<<"you need "<<n/10<<" note of 10"<<endl;
        n -=10 *(n/10);
        break;
    
    }
    switch (n >= 1)
    {
    case 1:
        cout<<"you need "<<n/1<<" note of 1"<<endl;
        n -=1 *(n/1);
        break;
    
    }

    


}