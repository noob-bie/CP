#include <bits/stdc++.h>
using namespace std;

void MaxOut(int a, int b, int c);
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    MaxOut(a, b, c);
}

void MaxOut(int a, int b, int c)
{
    int u, v, w, x, y, z;
    u = a + (b * c);
    v = (a + b) * c;
    w = a * (b + c);
    x = (a * b) + c;
    y = a * b * c;
    z = a + b + c;

    if (u > v && u > w && u > x && u > y && u > z)
    {
        cout << "" << u << endl;
    }
    if (v > u && v >= w && v > x && v >= y && v >= z)
    {
        cout << "" << v << endl;
    }
    if (w > u && w > v && w > x && w > y && w >= z)
    {
        cout << "" << w << endl;
    }
    if (x > u && x > v && x > w && x > y && x > z)
    {
        cout << "" << x << endl;
    }
    if (y > u && y > v && y > w && y > x && y > z)
    {
        cout << "" << y << endl;
    }
    if (z > u && z > v && z > w && z > x && z > y)
    {
        cout << "" << z << endl;
    }

}