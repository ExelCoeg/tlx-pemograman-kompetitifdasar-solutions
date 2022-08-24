#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, B, i, sum;
    int bebek[20000] = {};
    cin >> N >> B;

    for (int i = 0; i <= N; i++)
    {
        cin >> bebek[i];
    }

    int n = sizeof(bebek) / sizeof(bebek[0]);
    sort(bebek, bebek + n, greater<>());

    while (sum < B)
    {
        sum += bebek[i];
        i += 1;
    }

    cout << i << endl;
}