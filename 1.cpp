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
 double dicision(int a, int b){

    cout<< " Division of  a & b is : ";
    return a/b;
}





int main(){

 
 cout << sum(45,34)<<endl;
 cout << subt(45.1245,46);




    return 0;
}