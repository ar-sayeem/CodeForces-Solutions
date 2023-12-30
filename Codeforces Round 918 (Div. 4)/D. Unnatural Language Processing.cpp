/// Codeforces Round 918 (Div. 4)
/// D. Unnatural Language Processing
/// 28 December, 2023

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int i=0, t; string str;         /// input per line
    cin >> t; cin >> str;
    reverse(str.begin(), str.end());
    string ans;

    while(i < t)
    {
        if(str[i] == 'a' || str[i] == 'e')
        {
            ans += str[i];          /// push
            ans += str[i+1];
            i += 2;
        }
        else
        {
            ans += str[i];
            ans += str[i+1];
            ans += str[i+2];
            i += 3;
        }
        ans += ".";
    }

    ans.pop_back();         /// pop the last inserted element, which was a extra "."
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

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
