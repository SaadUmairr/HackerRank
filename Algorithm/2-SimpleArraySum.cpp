// https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int simpleArraySum(vec arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];
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
    int size;
    cin >> size;
    vec arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << simpleArraySum(arr);
    return 0;
}