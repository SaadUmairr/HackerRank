// https://www.hackerrank.com/challenges/kangaroo/problem
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

string numberLineJump(int x1, int v1, int x2, int v2)
{
    if ((v2 - v1 != 0) && (x1 - x2) % (v2 - v1) == 0 && (x1 - x2) / (v2 - v1) > 0)
        return "YES";
    return "NO";
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

    return 0;
}