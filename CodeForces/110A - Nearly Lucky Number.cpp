#include <bits/stdc++.h>
using namespace std;
void lucky(string a);
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    cin >> a;
    lucky(a);
}

void lucky(string a)
{
    int c = a.length();
    int b = 0;
    int i = 0;
    for (int i = 0; i < c; ++i)

    {
        if (a[i] == '4' || a[i]=='7' )
        {
            b++;
        }



    }
    //cout << "" << b << endl;
    if (b == 4 || b == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
