#include<iostream>
using namespace std;

int linerSearch(int array[], int n, int key){
    for (int i=0 ;i<n;i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the total number of elements into the array: ";
    cin>>n;
    int array[n];

    for(int i=0 ; i<n ; i++){
        cout<<"Enter the "<<i+1<<" Element: ";
        cin>>array[i];
    }

    int key;
    cout<<"Enter the element you want to find: ";
    cin>>key; 
    cout<<"The index number of "<<key<<" is "<<linerSearch(array,n,key)<<endl;

    return 0;
}
