#include <bits/stdc++.h>
using namespace std ;


int main()
{
    string s_1 , s_2 ;
    cin>>s_1>>s_2 ;

    int len = s_1.size() ;
    string st ;
    for(int i = 0 ; i < len ; ++i )
    {
        if(s_1[i] == s_2[i])
        {
            st.push_back('0');
        }else{
            st.push_back('1');
        }
    }

    cout<<st<<endl;

    return 0 ;
}
