/// Codeforces Round 913 (Div. 3)
/// A. Rook

#include<iostream>
using namespace std;

void Rook(char Col, int Row)
{

    for(int i=1; i<=8; i++)
    {
        if( i != Row )
        {
            printf("%c%d\n", Col, i);
        }
    }

    for( char j='a'; j<='h'; j++ )
    {
        if( j != Col )
        {
            printf("%c%d\n", j, Row);
        }
    }

}

int main()
{
    int T;      // Test case
    cin >> T;
    while(T--)
    {
        int Row;
        char Col;
        cin >> Col >> Row;
        Rook(Col, Row);
    }
    return 0;
}
