// https://www.hackerrank.com/challenges/counter-game/problem
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <math.h>
#define vec vector<ll>
#define ll long long int
using namespace std;

string counterGame(ll n)
{
    ll count = 0;
    while (n != 1)
    {
        if ((n > 0) && ((n & (n - 1)) == 0))
            n /= 2;
        else
            n = n - pow(2, floor(log2(n)));
        count++;
    }
    return (count & 1) ? "Louise" : "Richard";
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

    ll number, testCases;
    cin >> testCases;

    while (testCases--)
    {
        cin >> number;
        cout << counterGame(number) << endl;
    }

    return 0;
}