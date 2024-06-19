#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int ca = 1;

    while (t--)
    {
        int n,m;
        cin>>n;
        char c;
        int val = 1000;
        while (n--)
        {
            cin >> c >> m;
            if(c == '+')val+= m;
            else val-=m;
        }
        cout<<"Case "<<ca<<": "<<val<<endl;
        ca++;
    }

    return 0;
}