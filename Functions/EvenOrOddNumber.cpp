#include<iostream>
using namespace std;

bool isEven(){
    int a;
    cin>>a;

    if(a % 2 == 0){
        return true;
    }
    return false;
}
 
int main(){
    int answer = isEven();
    if(answer == true){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }

    return 0;
}