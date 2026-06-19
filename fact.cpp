#include <iostream>
using namespace std;

// Function for the calculation of Factorial 

 double factorial(int n){

    int fact=1;

    for (int i = n ; i!=0 ;i--){
            fact*=i;
      //   fact*=i;  it will multipy thevalue of fact with I 

          
      }

    cout<< "Factorial of " << n << " is :  " ; 
    
    // calling the fact valiable which have the factorial value  
    return fact;
 }

 int main(){
   int n;
   cout << "Enter any number for factorial :  ";
   cin >> n;

    cout << factorial(n);
    
    return 0;
 }