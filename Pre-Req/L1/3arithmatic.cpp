//Write a program to read two numbers and print their sum, difference, product and 
// quotient.

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "enter two number to print their sum , difference, product and quotient: ";
    cin >> a >> b;
    
    cout << "the sum of " << a << " and " << b << " is:  "<< a+b << endl;
    cout << "the difference of " << a << " and " << b << " is:  "<< a-b << endl;
    cout << "the product of " << a << " and " << b << " is:  "<< a*b << endl;
    cout << "the quotient of " << a << " and " << b << " is:  "<< a/b << endl;  
    return 0;

}