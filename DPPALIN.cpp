#include <bits/stdc++.h>

using namespace std;


string s;
int f[2001][2001];
int n, res = 0;
void solve(){
    n = s.size();

    for (int i=0; i<=n; i++){
            f[i][n+1] = 0;
            f[0][i] = 0;
        }

    for(int i=1; i<=n; i++)
        for (int j=n; j>=1; j--)
            if (s[i]==s[j])
                f[i][j] = f[i-1][j+1] + 1;
            else
                f[i][j] = max(f[i-1][j], f[i][j+1]);
    int i=n, j=1;
    while(i>=1 && j<=n){
        if(s[i]==s[j]){
                res++; i--; j++;
        }
        else
            if (f[i][j]==f[i-1][j]) i--; else j++;
    }
    cout << res;
  }
int main(){
    freopen("DPPALIN.inp", "r", stdin);
    freopen("DPPALIN.out", "w", stdout);

    cin >> s;
    solve();
    return 0;
}
