#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int ar[5][5];
    int i_, j_ ;
    for(int i = 0 ; i < 5 ; i++ )
    {
        for(int j = 0 ; j < 5 ; j++ )
        {
            cin>>ar[i][j];
            if(ar[i][j] == 1)
            {
                i_ = i+1 ;
                j_ = j+1 ;
            }
        }
        cout<<endl;
    }
    ///cout<<i_<<j_<<endl;
    int result = abs(i_-3) + abs(j_ - 3);
    cout<<result<<endl ;

    return 0 ;
}
