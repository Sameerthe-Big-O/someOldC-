// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // int a[5]={1,2,4,5,6};
    // int num1 = 70;
    // double num2 = 256.783;
    // char ch = 'A';

    // cout << num1 << endl;    // print integer
    // cout << num2 << endl;    // print double
    // cout << "character: " << ch << endl;    // print char
    // cout << "Try programiz.pro\n";
    // cout << a[6];
    // int num,nums;
    // cout << "Enter an integers:";
    // cin >> num>>nums;   // Taking input
    // cout << "The number is:"<< num+nums; 
     // assigning an int value to num_int
//   int num_int = 9;

//   // declaring a double type variable
//   double num_double;
 
//   // implicit conversion
//   // assigning int value to a double variable
//   num_double = num_int;

//   cout << "num_int = " << num_int << endl;
//   cout << "num_double = " << num_double << endl;
//*implicit
//     int num_int;
//   double num_double = 9.99;

//   // implicit conversion
//   // assigning a double value to an int variable
//   num_int = num_double;

//   cout << "num_int = " << num_int << endl;
//   cout << "num_double = " << num_double << endl;

    // initializing a double variable
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;


    return 0;
}