#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    int p , q ;
    int flag = 0 ;
    while(n--)
    {
        cin>>p>>q ;

        if( p + 1 < q )
        {
            flag++ ;
        }
    }
    cout<<flag<<endl;

    return 0 ;
}
