// an arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal . for example [9,10] , [3,3,3] and [9,7,5,3] are arithmetic array 

// sarasvati has an array of N non-negative integers the i-th integer of the array is A . she want to choose a contiguous arithmetic sub-array from her array that has maximum length . please help her to determine the length of the longest contiguous arithmetic sub-array 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    int ans=2;
    int pd =a[1]-a[0];
    int j=2;
    int curr =2;

    while(j<n){
        if(pd == a[j]-a[j-1]){
            curr++;
        }else{
            pd = a[j] - a[j-1];
            curr =2;
        }
        ans = max(ans , curr);
        j++;
        
    }

    cout<<ans<<endl;

    return 0;

}