// https://www.hackerrank.com/challenges/apple-and-orange/problem
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void appleOrange(ll start, ll endpoint, ll a, ll b, vec apples, vec oranges)
{
    int appleCount = 0, orangeCount = 0;
    for (int i = 0; i < apples.size(); i++)
    {

        apples[i] += a;
        if (apples[i] >= start && apples[i] <= endpoint)
            appleCount++;
    }
    for (int i = 0; i < oranges.size(); i++)
    {
        oranges[i] += b;
        if (oranges[i] >= start && oranges[i] <= endpoint)
            orangeCount++;
    }
    cout << appleCount << endl;
    cout << orangeCount << endl;
}

int main()
{
    system("cls");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    vec apples(m), oranges(n);
    for (int i = 0; i < m; i++)
        cin >> apples[i];
    for (int i = 0; i < n; i++)
        cin >> oranges[i];
    appleOrange(s, t, a, b, apples, oranges);
    return 0;
}