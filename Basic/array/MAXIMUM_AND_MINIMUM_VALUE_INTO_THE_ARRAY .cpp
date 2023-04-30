#include<iostream>
#include<climits>
using namespace std;



int main(){
   int n;
   cout<<"Number of Elements in Array: ";
   cin>>n;
   int array[n];

   for(int i=0 ; i<n ; i++){
    cout<<"Enter the "<<i+1<<" Element: ";
    cin>>array[i];
    
   }

   int maxNo=INT_MIN;
   int minNo=INT_MAX;

   for(int i=0 ; i<n ; i++){
    maxNo = max(maxNo , array[i]);
    minNo = min(minNo , array[i]);
   }

    cout<<"The maximum number is: "<<maxNo<<endl;
    cout<<"The minimum number is: "<<minNo<<endl;
}