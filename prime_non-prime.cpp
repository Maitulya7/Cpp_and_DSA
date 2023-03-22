// #include <iostream>
// using namespace std;

// int main() {

//   int i, n;
//   bool is_prime = true;

//   cout << "Enter a positive integer: ";
//   cin >> n;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }

//   // loop to check if n is prime
//   for (i = 2; i <= n/2; ++i) {
//     if (n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }

//   if (is_prime)
//     cout << n << " is a prime number";
//   else
//     cout << n << " is not a prime number";

//   return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int a, b ;
    cout<<"enter the starting rage: " ;
    cin>>a;

    cout <<"enter the ending rage: ";
    cin>>b;

    for(int num = a ; num <=b ; num++){
        int i ; 
        for( i = 2 ; i < num ; i++){
            if( num % i ==0 ){
                break;
            }
        }

        if(i == num){
            cout<< num <<endl;
        }
    }
    return 0 ;
}

