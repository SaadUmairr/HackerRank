// https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int minMaxSum(vec arr)
{
    sort(arr.begin(), arr.end());
    int64_t MaxSum = 0, MinSum = 0, totalSum = 0;
    for (int i = 0; i < arr.size(); i++)
        totalSum += arr[i];

    MinSum = totalSum - arr[arr.size() - 1];
    MaxSum = totalSum - arr[0];
    cout << MinSum << " " << MaxSum << endl;
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

    minMaxSum(arr);

    return 0;
}