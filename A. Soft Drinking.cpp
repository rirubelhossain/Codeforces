#include <bits/stdc++.h>
using namespace std ;

int minimum_number(int a ,int b ,int c )
{
    if( a < b )
    {
        if( a < c )
        {
            return a ;
        }else
        {
            return c ;
        }
    }else if( b < c)
    {
        return b ;
    }else
    {
        return c ;
    }
}

int main()
{
    int n , k , l , c , d , p , nl , np ;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np ;
    int milliliter = (k*l);
    int toasts = milliliter / nl ;
    int limes = c * d ;
    int salt = p/np ;
    ///min(6,80,100) / 3 like min(toasts,limes,salt) / n = 2
    cout<<minimum_number(toasts, limes , salt ) / n<<endl;
    return 0;
}
