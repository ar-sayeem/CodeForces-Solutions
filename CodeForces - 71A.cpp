/// CodeForces - 71A
/// A. Way Too Long Words

#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    while (n--)
    {
        cin >> str;
        if (str.length() > 10)          /// string length
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
            /// 1st letter, length - 2, last letter
        }
        else
        {
            cout << str << endl;                /// return input
        }
    }
    return 0;
}
