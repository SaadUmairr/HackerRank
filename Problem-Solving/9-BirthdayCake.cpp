#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int birthdayCakeCandles(vec arr, int size)
{
    sort(arr.begin(), arr.end());
    int biggest = arr[size - 1];
    int tallCandleCounter = 0;
    int i = size - 1;
    while (biggest == arr[i])
    {
        tallCandleCounter++;
        i--;
    }
    return tallCandleCounter;
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
    int size, el;
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> el, arr.push_back(el);
    cout << birthdayCakeCandles(arr, size) << endl;
    return 0;
}