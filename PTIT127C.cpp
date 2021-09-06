#include <bits/stdc++.h>
#define st first
#define nd second
using namespace std;
bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int n;
    cin >> n;
    pair<int,int> a[n];
    int l[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].st >> a[i].nd;
    }
    sort(a,a+n,cmp);
    int res = 0, x = a[0].st;
    for(int i=0; i<n; i++)
        if (x <= a[i].st)
        {
            res++;
            x=a[i].nd;
        }
    cout << res;
}
