#include <bits/stdc++.h>
using namespace std;
void football(string a);
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    cin >> a;
    football(a);
}

void football(string a)
{
    int i = 0;
    int b = 0;
    int d = 0;
    while (a[i] != '\0')
    {

        if (a[i] == '0')
        {
            d = 0;
            b++;
        }
        if (b >= 7)
        {
            cout << "YES" << endl;
            break;
        }

        if (a[i] == '1')
        {
            b = 0;
            d++;
        }
        if (d >= 7)
        {
            cout << "YES" << endl;
            break;
        }

        ++i;
    }
    if (b < 7 && d < 7)
        cout << "NO" << endl;
}
