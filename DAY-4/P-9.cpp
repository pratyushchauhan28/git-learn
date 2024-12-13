#include <iostream> 
using namespace std ;

int po ( int a, int b ) {
    if ( b==0 ) {
        return 1 ;
    }
    else {
        return a*po(a,b-1) ;
    }
}
int main () {
    int a, b ;
    cout << "Enter the number and power : " ;
    cin >> a >> b ;
    cout << "Sum of digit is : " << po(a,b) ;
}