#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    string s ;
    int counter_anton = 0 ;
    int counter_danik = 0 ;
    cin>>n>>s ;
    int c_a = 0 ;
    int c_d = 0 ;
    for(int i = 0 ; i < n ; ++i )
    {
        if(s[i] == 'A')
        {
            c_a++;
        }else{
            c_d++;
        }
    }
    if(c_a > c_d )
    {
        cout<<"Anton"<<endl;
    }else if( c_a == c_d)
    {
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }

    return 0 ;
}
