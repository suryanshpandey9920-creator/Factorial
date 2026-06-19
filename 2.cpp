#include <iostream>
using namespace std ;

// Function for the repeatetion 
double  table(int n ){

   for (int i=1; i<=10 ;i++){
        // this loop will run  from 1 to 10 times for a table function 
        
      cout <<n<<" x "<<i <<" = "<< n*i << "\n";

       // everytime the loop run we have to multiply 
        // (n * i )  means n*1, n*2 , n*3, n*4, .... till n*10 
        cout << endl; 

    }
    return 0;
}



int main(){

    int tab;
    cout << "Enter the table number, EX: 2,3,4, etc : ";
    cin >> tab;
    cout << table(tab) << endl;

    //  this is function method, you can comment it
    //  and directly call the function and give a value 


    //  ex 

    cout << table(5) << endl;

    

 
    return 0;
}