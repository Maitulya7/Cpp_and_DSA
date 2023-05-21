#include<iostream>
using namespace std;

void revers(int arr[] , int n){
    int start = 0;
    int end = n-1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0 ; i< n ; i++){
        cin>>arr[i];
    }

    revers(arr,n);

    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}