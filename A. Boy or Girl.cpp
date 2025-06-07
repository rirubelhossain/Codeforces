#include <bits/stdc++.h>
using namespace std ;

int main()
{
    string str ;
    cin>>str;
    int len = str.size() ;
    int flag ;
    flag = 0 ;
    ///apple
    for(int i = 0 ; i < len ; i++ )
    {

        for(int j = 0 ; j < len; j++)
        {
            if(str[i] == str[j] and i != j)
            {
                cout<<str[j]<<endl;
                flag++;
                break ;
            }
        }
    }
    len = len - flag ;

    if( len % 2 == 0 )
    {
        cout<<"IGNORE HIM!"<<endl;
    }else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

    return 0 ;
}
