#include<iostream>
using namespace std;


int getMax(int arr[] , int n){
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        maxi = max(maxi , arr[i]);
    }
    return maxi;
}

int getMin(int arr[] , int n){
    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        mini = min(mini , arr[i]);
    }
    return mini;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

    cout<<"Maximum value is: "<<getMax(arr, n)<<endl;   
    cout<<"Minimum value is: "<<getMin(arr, n)<<endl;   

    return 0;
}