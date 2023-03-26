#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows*2: ";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=n ; j>=n-i ; j--){
            cout<<" ";   
        }
        for(int k=1 ; k<=n ; k++){
                cout<<"-";
            }
        cout<<endl;
    }

     for(int i=1 ; i<=n ; i++){
        for(int j=n ; j>=i-1 ; j--){
            cout<<" ";   
        }
        for(int k=1 ; k<=n ; k++){
                cout<<"-";
            }
        cout<<endl;
    }
    return 0;
}