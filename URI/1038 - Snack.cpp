#include <bits/stdc++.h>
using namespace std;

int main ()
{   cout << fixed << setprecision(2);
    int a,b;
    cin >> a >> b;

    if (a == 1)
    {
        cout << "Total: R$ " << 4.00*b<< endl;
    }
    if ( a== 2)
    {
        cout << "Total: R$ " << 4.50*b<< endl;
    }
    if ( a == 3 )
    {
        cout << "Total: R$ " << 5.00*b<< endl;
    }
    if ( a == 4 )
    {
        cout << "Total: R$ " << 2.00*b<< endl;
    }
    if ( a == 5 )
    {
        cout << "Total: R$ " << 1.50*b<< endl;
    }
    return 0;
}