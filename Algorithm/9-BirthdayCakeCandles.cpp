// https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int birthdayCakeCandles(vec arr)
{
    sort(arr.begin(), arr.end());
    int maxElement = arr[arr.size() - 1];
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == maxElement)
            count++;
    }
    return count;
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
    vec arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << birthdayCakeCandles(arr);
    return 0;
}