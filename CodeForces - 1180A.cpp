/// CodeForces - 1180A
/// Alex and a Rhombus

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int sum = 0, temp = 0, reduce = 0, j = 1;

    for (int i = 0; i < n; i++) {
        sum += j;
        if (i == n - 1) {
            temp = j;
        }
        j += 2;
    }

    reduce = sum - temp;
    sum += reduce;

    cout << sum << endl;

    return 0;
}
