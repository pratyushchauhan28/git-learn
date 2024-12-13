//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include <iostream> 
using namespace std ;

int main () {
    int x, y ;
    cout << "Enter the coordinates : " ;
    cin >> x >> y ;
    if ( x>0 && y>0 ) 
        cout << "The point lies in first quadrant." ;
    else if ( x<0 && y>0 ) 
        cout << "The point lies in second quadrant." ;
    else if ( x<0 && y<0 ) 
        cout << "The point lies in third quadrant." ;
    else if ( x>0 && y<0 ) 
        cout << "The point lies in fourth quadrant." ;
    else 
        cout << "The point lies at centre or axes." ;

    return 0 ;
}