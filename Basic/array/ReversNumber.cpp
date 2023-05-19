#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int revers=0;
    while(n>0){
        int lastDigite = n%10;
        revers = revers*10 + lastDigite;
        n = n/10;
    }
    cout<<revers<<endl;

    return 0;
}