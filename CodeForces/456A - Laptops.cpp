#include <bits/stdc++.h>
using namespace std;

void Alex(int n);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;

    cin >> n;
    Alex(n);
    return 0;
}
void Alex(int n)
{
    const int N = 1e5;
    int i = 0, a[N], b[N];
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (i = 0; i < n - 1; ++i)
    {
        if (a[i] <  b[i] || a[i+1]< b[i+1])
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;
}
