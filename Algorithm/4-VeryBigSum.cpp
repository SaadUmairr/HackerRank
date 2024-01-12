// https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

unsigned ll aVeryBigSum(vec arr)
{
    unsigned ll sum = 0;
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
    //  vec arr={1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
    vec arr;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << aVeryBigSum(arr);
    
    return 0;
}