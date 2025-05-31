#include <bits/stdc++.h>
using namespace std ;


int main()
{
    int n , p, counter;

    cin>> n ;
    int sum ;
    counter = 0 ;
    while(n--){

            sum = 0 ;
            for(int i = 1 ; i <= 3; i++)
            {
                cin>>p;
                sum += p ;
            }
            if( sum >= 2){
                counter++;
            }
    }
    cout<<counter<<endl;

    return 0 ;
}
