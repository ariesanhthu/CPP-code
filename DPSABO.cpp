#include <iostream>

using namespace std;
int n, k, f[10001]{1};
int main()
{
    cin >> n >> k;
    if (k > n) cout << (n+1);
    else
    {
        for (int i = 1; i <= (k+1); i++) f[i] = i + 1;

        for (int i=k+2; i<= n; i++)
            f[i] = (f[i-1] + f[i-k-1]) % 1000000;

        cout << f[n];
    }
    return 0;
}
