// https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec compareTriplets(vec a, vec b)
{
    vec result(2, 0);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            result[0]++;
        else if (a[i] < b[i])
            result[1]++;
    }
    return result;
}

int main()
{
    system("cls");
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    vec alice(3), bob(3), result;
    for (int i = 0; i < 3; i++)
        cin >> alice[i];
    for (int i = 0; i < 3; i++)
        cin >> bob[i];
    result = compareTriplets(alice, bob);
    for (auto i : result)
        cout<<i<<' ';
    return 0;
}