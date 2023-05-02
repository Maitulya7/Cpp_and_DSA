// meet is given the number of visitor at her local theme park on N consecutive day the number of visitors on the i-th day is V. a day is record breaking if it satisfies both the following conditions 
//1.The number of visitors on the day is strictly larger than the number of visitors on each of the previous day
//2. either it is the last day or the number of visitors on the day is strictly larger then the number of visitors on the following day 
// note that the very first day could be a record breaking day 



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n] = -1;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if( n ==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans =0;
    int mx = -1;

    for(int i=0; i<n ; i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx = mx(mx,a[i]);
    }

    cout <<ans <<endl;
    
    return 0;

}