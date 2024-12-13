//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include <iostream> 
using namespace std ;

int main () {
    int a, b, c ;
    cout << "Enter the sides of triangle : " ;
    cin >> a >> b >> c ;
    if ( a==b && b==c ) {
        cout << "The triangle is equilateral triangle. " ;
    }
    else if ( a==b || a==c || c==b ) {
        cout << "The triangle is isosceles triangle. " ;
    }
    else {
        cout << "The triangle is scalene triangle. " ;
    }
    return 0 ;
}