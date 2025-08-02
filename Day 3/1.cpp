#include <iostream>
using namespace std;

int main(){
    int x = 5, y = 2;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl; // we are not getting the decimal point value, it give only the integer part, not giving the decimal part

    // float data type  - by using this we can store decimal point value, float data type is used to add decimal point value and integers also.

    float a = 5, b = 2;
    cout << a / b << endl; // now we will get the decimal point value 

    // increment and decrement operators
 // post increment and decrement 
    int m = 4;
    cout << m << endl;
    m = m + 1;
    m += 1;
    m++;     // this all three methods are used to increase the value with 1, this is post increment - says first use the value which is 4, then add 1
    cout << m << endl;

    m--;  // this is used to decrease the value;
    cout << m << endl;

    // pre increment and decrement 

    ++m;
    cout << m << endl;  // this says first increment the value then print the value.
    --m;
    cout << m << endl;

    // difference between post increment and pre 
    return 0;
}