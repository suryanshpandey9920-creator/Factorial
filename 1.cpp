#include <iostream>
using namespace std ;

// sum function
double sum(int a, int b){

    cout<< "sum of a & b is : ";
    return a+b;
}

// Subtraaction function
double subt(int a, int b){

    cout<< "Subtraction of a & b is : ";
    return a-b;
}

// Multiplication function
double product(int a, int b){

    cout<< " product of  a & b is : ";
    return a*b;
}

 // Division function
 double division(int a, int b){
     if (b == 0){  
        cout << "The division with 0 is not possible! Try another number  ";
     }
   else {
    cout<< " Division of  a & b is : ";  }
    return a/b;
}





int main(){

  cout << division(5, 2);




    return 0;
}