#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a[101][101], f[101][101];
int m,n;
int main(){
    freopen("DPPATHMAX.inp", "r", stdin);
    freopen("DPPATHMAX.out", "w", stdout);

    cin >> n >> m;

    for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin >> a[i][j];

    for(int i=1; i<=m; i++)
        f[0][i] = a[1][i];

    for(int i=1; i<=n; i++)
        f[i][1] = a[i][1];

    for (int j=2; j<=m; j++){
            for (int i=1; i<=n; i++)
                f[i][j] = a[i][j] + max(f[i][j-1], max(f[i-1][j-1], f[i+1][j-1]));

    }

    for (int i=2; i <=n; i++){
        f[i][m] = max(f[i][m],f[i-1][m]);
    }
    cout << f[n][m];
    return 0;
}
