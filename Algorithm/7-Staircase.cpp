// https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int spaces = n - i, stars = i;
        while (spaces--)
            cout << " ";
        while (stars--)
            cout << "*";
        cout << endl;
    }
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
    int size;
    cin >> size;
    staircase(size);
    return 0;
}