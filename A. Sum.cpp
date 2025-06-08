#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int a , b , c , n ;

    cin>>n ;

    while(n--)
    {
        a = 0 ;
        b = 0 ;
        c = 0 ;
        cin>>a>>b>>c ;

        if( a + b == c || a + c == b || b + c == a )
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0 ;
}
