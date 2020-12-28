#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, one = 0, ans = 1;
        string s, p;
        cin>>n;
        cin>>s>>p;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] != p[i])
            {
                if(s[i] == '1')
                    ++one;
                else
                {
                    if(one > 0)
                        --one;
                    else
                    {
                        ans = 0;
                        break;
                    }
                }
            }
        }
        if(ans == 1 && one == 0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
