#include <iostream>
using namespace std ;

// Function for the repeatetion 
double  table(int n ){

   for (int i=1; i<=10 ;i++){
        // this loop will run  from 1 to 10 times for a table function 
        
      cout <<n<<" x "<<i <<" = "<< n*i << "\n";

       // everytime the loop run we have to multiply 
        // (n * i )  means n*1, n*2 , n*3, n*4, .... till n*10 

    }
    return 0;
}



int main(){
    cout << table(20) << endl;
    //  cout << table(2) << endl;
    //   cout << table(3) << endl;
    //    cout << table(4) << endl;
    //     cout << table(5) << endl;
    //      cout << table(6) << endl;
    //       cout << table(7) << endl;
    //        cout << table(8) << endl;
    //         cout << table(9) << endl;
    //          cout << table(10) << endl;


 
    return 0;
}