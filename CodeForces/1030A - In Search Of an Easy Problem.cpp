#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, c = 0;
    int a[101];
 
    cin >> n;
 
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 0)
            c++;
    }
 
    if (c == n)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
 
    return 0;
}