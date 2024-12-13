/*
Mediclaim Premium of a person is calculated based on following Age Group: (Age Group less than 30 Years: Rs. 1000 per Lakh, Age Group above 30 years & less than 40 Years: Rs. 1500 per Lakh, Age Group above 40 years & less than 50 Years: Rs. 2000 per Lakh, Age Group above 50 years & less than 60 Years: Rs. 2500 per Lakh, Age Group above 60 years & less than 70 Years: Rs. 3000 per Lakh,  If the age is 70 years or above, the insurance can not be taken. Apart from this if the person is Female, a discount of 20% is given on calculated premium. If the person is not married, another discount of 10% is offered. After the discount a GST @18% charged on the calculated premium. Given the Date of Birth, Mediclaim Sum Insured, Sex and marital status, calculate the premium to be paid by the person.
*/
#include <iostream> 
using namespace std ;

int main () {
    int dobd, dobm, doby, msi, ans=0, age ;
    char gen, m ;
    cout << "Enter the date of birth (DD MM YYYY) : " ;
    cin >> dobd >> dobm >> doby ;
    cout << "Enter the mediclaim sum insured : " ;
    cin >> msi ;
    cout << "Enter the gender (M/F) : " ;
    cin >> gen ;
    cout << "Enter the maritial status (M/U) : " ;
    cin >> m ;
    if ( dobm<9 ) {
        age = 2024-doby ;
    }
    else if ( dobm==9 ) {
        if ( dobd<=11 ) 
            age = 2024-doby ;
        else 
            age = 2024-doby-1 ;
    }
    else {
        age = 2024-doby-1 ;
    }
    if ( age<30 ) 
        ans = (1000*msi)/100000 ;
    else if ( age<40 ) 
        ans = (1500*msi)/100000 ;
    else if ( age<50 )
        ans = (2000*msi)/100000 ;
    else if ( age<60 ) 
        ans = (2500*msi)/100000 ;
    else if ( age<70 ) 
        ans = (3000*msi)/100000 ;
    else {
        ans=0 ;
        cout << "Not eligible for insurance :(" ;
    }

    if ( ( gen==70 || gen==102 ) && ( m==85 || m==117 ) ) {
        ans = ans - (30*ans)/100 ;
    }
    else if ( gen==70 || gen==102 ) {
        ans = ans - (20*ans)/100 ;
    }
    else if ( m==85 || m==117 ) {
        ans = ans - (10*ans)/100 ;
    }
    ans+=(ans*18)/100 ;
    cout << "The premium amount for insurance is : " << ans ;
    return 0 ;
}