// Write a program to read the radius of a circle and print its area and  circumference. 

#include<iostream>
using namespace std;
int main(){

    cout<< " enter the radius of the circle: ";
    float r ;
    cin >> r;
    cout << "the area of the circle is: " << 3.1416 * r * r << endl;
    cout << "the circumference of the circle is: "<< 2 * 3.1416 * r << endl;
    return 0;
}