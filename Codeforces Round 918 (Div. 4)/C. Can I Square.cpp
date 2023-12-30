/// Codeforces Round 918 (Div. 4)
/// C. Can I Square?
/// 28 December, 2023

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()            /// each line inputs
{
    int n, temp;
    ll sum = 0;
    cin >> n;
    while(n--)          /// loop to add them up
    {
        cin >> temp;
        sum += temp;
    }

    double num1 = sqrt(sum);
    int num2 = num1;

    if (num2 == num1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}


int main()
{
    int T;      // Test case
    cin >> T;
    while(T--)
    {
        solve();
    }
    return 0;
}
