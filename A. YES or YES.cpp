#include <bits/stdc++.h>
using namespace std ;


int main()
{
    string s ;
    int n ;

    cin>>n ;

    while(n--)
    {
       cin>>s ;

        if( s == "yES" || s == "yes" || s == "Yes" || s == "YES" || s == "yEs" || s == "yeS" || s == "YEs" || s == "YeS" || s == "yES")
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0 ;
}
