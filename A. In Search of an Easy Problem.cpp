#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    int n_p ;
    int flag = 0 ;
    cin>>n ;
    for(int i = 0 ; i < n ; ++i )
    {
        cin>>n_p ;
        if(n_p == 1 )
        {
            flag = 1 ;
        }
    }
    if( flag == 1)
    {
        cout<<"HARD"<<endl;
    }else
    {
        cout<<"EASY"<<endl;
    }

    return 0 ;
}
