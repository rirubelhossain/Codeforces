#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int n , p , x ,y ;

    // Creating a set of integers
    set<int> levels ;
    cin>>n ;

    cin>>p ;
    for(int i = 0 ; i < p ; ++i )
    {
        cin>>x;
        levels.insert(x) ;
    }
    int q ;
    cin>>q ;
    for(int i = 0 ; i < q; ++i )
    {
        cin>>y ;
        levels.insert(y);
    }

    if((int)levels.size() == n)
    {
        cout<<"I become the guy."<<endl;
    }else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0 ;
}
