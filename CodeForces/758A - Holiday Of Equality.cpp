#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, max = 0,sum=0;
    int a[101],b[101];
 
    cin >> n;
 
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    max = a[0];
    for (i = 1; i < n; ++i)
    {
        if (max < a[i])
            max = a[i];
    }
    
    for (i = 0; i < n; ++i)
    {
        b[i]=max-a[i];
    }
    for (i = 0; i < n; ++i)
    {
        sum+=b[i];
    }
    cout<<sum<<endl;
}