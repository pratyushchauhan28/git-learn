//Find weekday of given date
#include <iostream> 
using namespace std ;

int check ( int d, int m, int y )
{
    if ( m==2 )
    {
        if ( (y%4 == 0 && y%100!=0) || y%400==0 ) 
        {
            if ( d<30 && y>0 )
            {
                return 1 ;
            }
            else 
            {
                return 0 ;
            }
        }
        else
        {
            if ( d<29 && y>0 )
            {
                return 1 ;
            }
            else 
            {
                return 0 ;
            }
        }
    }
    else
    {
        if ( d>0 && d<32 && m>0 && m<13 && y>0 )
        {
            return 1 ;
        }
        else
        {
            return 0 ;
        }
    }
}
int main() {
    int cen[4]={0,5,3,1}, mon[12]={3,0,3,2,3,2,3,3,2,3,2,3}, odd=0, d, m, y, y1;
    char week[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    scanf("%d %d %d",&d, &m, &y);
    y1=y;
    if ( check( d, m, y ) )
    {
            y=y-1;
            odd+=cen[(y/100)%4] ;
            if ( y%100!=0 )
            {
                y=(y%100) ;
                odd=odd+y+(y/4) ;
            }
            for ( int i=0; i<m-1; i++ )
            {
                odd+=mon[i];
            }
            if (( (y1%4 == 0 && y1%100!=0) || y1%400==0 ) && m>1 )
            {
                odd++ ;
            }
            odd+=d;
            odd=odd%7;
            printf("%s",week[odd]);
    }
    else 
    {
        printf("Incorrect Date");
    }
    return 0;
}