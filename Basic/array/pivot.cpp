#include<iostream>
using namespace std;

int pivot(int arr[] , int n){
    int start =0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while (start < end ){
        if( arr[mid] >= arr[start]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int answer = pivot(arr,n);
    cout<<"Pivot element index is : "<<answer<<endl;

}