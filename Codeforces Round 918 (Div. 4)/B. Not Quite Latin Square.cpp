/// Codeforces Round 918 (Div. 4)
/// B. Not Quite Latin sq
/// 28 December, 2023


#include<iostream>
using namespace std;

/// solve each 3x3 matrix
void solve()
{
    char c;
    int t=3;            /// 3 row
    while(t--)
    {
        string s1;
        cin >> s1;
        getchar();

        if(s1[0] == '?')            /// ? in index 0, row-1
        {
            if((s1[1] == 'A' && s1[2] == 'B') || (s1[1] == 'B' && s1[2] == 'A'))
                c = 'C';
            else if((s1[1] == 'A' && s1[2] == 'C') || (s1[1] == 'C' && s1[2] == 'A'))
                c = 'B';
            else
                c = 'A';
        }

        else if(s1[1] == '?')            /// ? in index 1, row-1
        {
            if((s1[0] == 'A' && s1[2] == 'B') || (s1[0] == 'B' && s1[2] == 'A'))
                c = 'C';
            else if((s1[0] == 'A' && s1[2] == 'C') || (s1[0] == 'C' && s1[2] == 'A'))
                c = 'B';
            else
                c = 'A';
         }

         else if(s1[2] == '?')            /// ? in index 2, row-1
        {
            if((s1[0] == 'A' && s1[1] == 'B') || (s1[0] == 'B' && s1[1] == 'A'))
                c = 'C';
            else if((s1[0] == 'A' && s1[1] == 'C') || (s1[0] == 'C' && s1[1] == 'A'))
                c = 'B';
            else
                c = 'A';
        }
    }
    cout << c << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
