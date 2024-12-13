//check whether an alphabet entered by the user is a vowel or a consonant.
#include <iostream>
using namespace std ;
int main () {
    char s ; 
    cout << "enter a character : " ;
    cin >> s ;
    if ( (s>=65 && s<=90) || (s>=97 && s<=122) ){
        if ( s==65 || s==69 || s==73 || s==79 || s==85 || s==97 || s==101 || s==105 || s==111 || s==117 ) {
        cout << "Vowel" ;
        }
        else {
            cout << "Consonant" ;
        }
    }
    return 0 ;
}