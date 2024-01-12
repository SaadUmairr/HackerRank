// https://www.hackerrank.com/challenges/solve-me-first/problem?isFullScreen=true
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int solveMeFirst(int a, int b)
{
    return a + b;
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
    int num1, num2;
    int sum;
    cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    cout << sum;
    return 0;
}