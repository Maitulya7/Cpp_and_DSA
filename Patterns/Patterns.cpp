// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    // patterns
    
    // rectangular pattern 
// int row , col;

// cout<<"Enter the number of rows: ";
// cin>>row;

// cout<<"Enter the number of columns: ";
// cin>>col;

// for ( int i = 1 ; i <= row ; ++i){
//     for(int j = 1 ; j <= col ; ++j){
//         cout<<"*";
//     }
    
//     cout<<endl;
// }




// hollow reactangular pattern 

// int row , col;

// cout<<"Enter the number of rows: ";
// cin>>row;

// cout<<"Enter the number of columns: ";
// cin>>col;

//   for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i==1 || i==row || j==1 || j==col)     
//                 cout << "*";         
//             else    
//                 cout << " ";         
//         }
//         cout << "\n";
//     }
    
    
    
    // inverted half pyramid 
    
//     int row;

// cout<<"Enter the number of rows: ";
// cin>>row;

// for(int i = row ; i >= 1; --i){
//     for (int j = 1 ; j<=i ; ++j){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// // half pyramid 

// for (int i = 1 ; i <= row ; i++){
//     for (int j =1 ; j <= i ; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// half pyramid after 180*
// int h;
// 	cout<<"Enter the height of pyramid"<<endl;
// 	cin>>h;
	
// 	for(int i=1; i<=h; i++)
// 	{
//         for(int j=1; j<=h; j++)
//         {
//         	if(j<=h-i)
//         	{
//         		cout<<"  ";
// 			}
// 			else cout<<" #";
// 		}
// 		cout<<endl;
// 	}
	
// half pyramid using numbers 
// int a ; 
// cout<<"Enter the value of rows: ";
// cin>>a;

// int     number = 1;
// for(int i = 1 ; i <= a ; i++){

//     for(int j = 1 ; j <=i ; j++){
//         cout<<i;
      
//     }
//     cout<<endl;
// }

// floyids triangle

// int a ; 
// cout<<"Enter the value of rows: ";
// cin>>a;
// int n = 1 ;
// for(int i = 1 ; i<= a ; i++){
//     for(int j= 1 ; j<= i ; j++){
//         cout<<n<<" ";
//         n++;
//     }
//     cout<<endl;
// }


// butterfly pattern 

int a ; 
cout<<"Enter the numner of row: ";
cin>>a;

for(int i = 1 ; i<=a ; i++){
    for (int j = 1 ; j<= i ; j++){
        cout<<"*";
    } 
    int space = 2*(a-i) ;
    
    for (int j = 1; j <= space ; j++){
        cout<<" ";
    }
    
     for (int j = 1 ; j<= i ; j++){
        cout<<"*";
    } 
    cout<<endl;
}
for(int i = a ; i>=1 ; i--){
    for (int j = 1 ; j<= i ; j++){
        cout<<"*";
    } 
    int space = 2*(a-i) ;
    
    for (int j = 1; j <= space ; j++){
        cout<<" ";
    }
    
     for (int j = 1 ; j<= i ; j++){
        cout<<"*";
    } 
    cout<<endl;
}


  return 0;
}
