/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -                            totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and then print the integral part only.
*/
#include <iostream> 
using namespace std ;

int main () {
    int basic, tsal ;
    char grade ;
    cout << "Enter basic salary : " << endl ;
    cin >> basic ;
    cout << "Enter the grade (A/B/C)" << endl ;
    cin >> grade ;
    tsal = basic + (20*basic)/100 + (50*basic)/100 - (11*basic)/100;
    if ( grade==65 || grade==97 )
        tsal+=1700 ;
    else if ( grade==66 || grade==98 )
        tsal+=1500 ;
    else 
        tsal+=1300 ;
    cout << "The total salary is : " << tsal ;
    return 0 ;
}