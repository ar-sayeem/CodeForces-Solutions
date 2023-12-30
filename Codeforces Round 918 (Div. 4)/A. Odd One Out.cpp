/// Codeforces Round 918 (Div. 4)
/// A. Odd One Out
/// 28 December, 2023


#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        if (n1 == n2)
        {
            cout << n3 << endl;
        }
        else if (n1 == n3)
        {
            cout << n2 << endl;
        }
        else if (n2 == n3)
        {
            cout << n1 << endl;
        }
    }

    return 0;
}
