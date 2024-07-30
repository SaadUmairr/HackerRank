#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

ll aVeryBigSum(vec &arr)
{
    ll sum = 0;

    for (auto &tr : arr)
        sum += tr;
    return sum;
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
    ll size, el;
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> el, arr.push_back(el);

    cout << aVeryBigSum(arr) << endl;

    return 0;
}