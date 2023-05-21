#include<iostream>
using namespace std;


int binarySearch(int array[] , int n , int key){
    int starting =0;
    int ending =n;

    while (starting <= ending)
    {
        int mid = (starting + ending) /2;

        if(array[mid] == key){
            return mid;
        }
        else if (array[mid]>key)
        {
            ending = mid -1;
        }
        else{
            starting = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements you want to add: ";
    cin>>n;
    int array[n];

    for(int i=0 ; i<n;i++){
        cout<<"Enter the "<<i<<" Element: ";
        cin>>array[i];
    }

    int key;
    cout<<"Enter the element you want to find: "<<endl;
    cin>>key;
    cout<<"The index of "<<key<<" is "<<binarySearch(array,n,key)<<endl;
}

