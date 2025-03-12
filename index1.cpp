//  data types ,reference variables,typecasting....
#include <iostream>
using namespace std;
int main()
{
    // Built in Data Types....
    // int a, b, c;
    // cout << "Enter The value of a :" << endl;
    // cin >> a;
    // cout << "Enter The value of b :" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The Sum is :" << c<<endl;

    // float d = 34.4f;       // f define that it is a float value to understand the compiler by defult its value in compailer is long
    // long double e = 34.5l; // l define that it is a long value to understand the compiler
    // cout << "The value of d is :" << d << endl << "The value of e is :" << e;

    // // how to see size of the keywords in c++
    // // Float , double,long double liters...
    // cout << "The size of 34.4 is" << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is" << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is" << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is" << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is" << sizeof(34.4L) << endl;

    // Reference Variables...
    // float x=3.2;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // Typecasting (Ek data Type ko Dusre Data type me convert krna )
    int a = 8;
    float b = 4.22;
    cout<<"the value of a is"<<(float)a<<endl; //convert int to float like both this things
    cout<<"the value of a is"<<float(a)<<endl;
    cout<<"the value of b is"<<(int)b<<endl;
    cout<<"the value of b is"<<int(b)<<endl;

    

    return 0;
}
