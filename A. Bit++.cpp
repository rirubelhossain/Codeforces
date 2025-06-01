#include <bits/stdc++.h>
using namespace std ;


int main()
{
    string a ;
    int n ;
    int counter = 0 ;
    cin>>n;
    while(n--)
    {
        cin>>a ;

        if(a[1] == '+'){
            counter++ ;
        }else{
            counter--;
        }
    }
    cout<<counter<<endl;



    return 0 ;
}
