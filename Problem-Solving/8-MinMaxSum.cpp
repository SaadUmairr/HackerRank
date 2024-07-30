#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void minMaxSum(vec &arr)
{
    ll maxSum = 0, minSum = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < 4; i++)
        minSum += arr[i];

    for (int i = 1; i < 5; i++)
        maxSum += arr[i];

    cout << minSum << '\t' << maxSum << endl;
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

    vec arr;
    ll el;
    for (int i = 0; i < 5; i++)
        cin >> el, arr.push_back(el);

    minMaxSum(arr);

    return 0;
}