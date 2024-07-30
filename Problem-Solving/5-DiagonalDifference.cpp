#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

int diagonalDifference(vector<vector<int>> arr, int size)
{
    int rightDiagonalDifference = 0, leftDiagonalDifference = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                leftDiagonalDifference += arr[i][j];
            if (i + j == size - 1)
                rightDiagonalDifference += arr[i][j];
        }
    }

    return abs(rightDiagonalDifference - leftDiagonalDifference);
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

    vector<vector<int>> arr;
    int size, el;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        arr.push_back(vector<int>());
        for (int j = 0; j < size; j++)
            cin >> el, arr[i].push_back(el);
    }

    cout << diagonalDifference(arr, size) << endl;

    return 0;
}