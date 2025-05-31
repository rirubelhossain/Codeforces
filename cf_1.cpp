#include <bits/stdc++.h>
using namespace std;

bool test_odd(int number)
{
    int result;
    if( number % 2 != 0){
        return 1;
    }else{
        return 0 ;
    }
}
bool test_div(int number )
{
    int result ;
    result = number / 2 ;
    cout<<result<<endl;
    if( result %2 == 0 )
    {
        return 0 ;
    }else{
        return 1 ;
    }
}

int main()
{
    int w ;
    cin>>w ;
    //cout<<test_odd(w);

    int result = w % 2 ;
    if( result == 0 )
    {
        //int catch_ = test_div(result) ;
        if( w >= 4){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
