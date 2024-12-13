//find the largest number among the three numbers entered by the user.
#include <iostream>
using namespace std ;
int main () {
    int a, b, c ;
    cout << "Enter the number : " ;
    cin >> a >> b >> c ;
    cout << "The largest number is " ;
    a>b && a>c ? cout << a : ( b>c ? cout<<b : cout << c ) ;
    return 0 ;
}