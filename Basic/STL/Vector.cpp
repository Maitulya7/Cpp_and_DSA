#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;

    int size = v.size();
    cout<<"All element of array is: ";
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    cout<<"After the pop function: ";
    v.pop_back();
    int size1 = v.size();
      for(int i=0; i<size1; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    // size of vector is how many element if present into the vector where capacity of vector mean how many element can be fit into the vector
    // and vector is dynamic 
    // example if capacity of vector is 2 and you try to push 3rd element to the vector it will increase it size to 2x mean it will be 4 . 

    vector<int> a(3,2);
    int size2 = a.size();
    cout<<"This is a vector: ";
    for(int i=0; i<size2; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    
    
    cout<<"This is last vector copy of a: ";
    vector<int> last(a);
        for(int i=0; i<size2; i++){
        cout<<last[i]<<" ";
    }cout<<endl;



    return 0;
}