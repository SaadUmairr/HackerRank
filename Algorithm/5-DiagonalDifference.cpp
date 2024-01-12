// https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#define vec vector<ll>
#define ll long long int
using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    long rightDiagonalSum = 0, leftDiagonalSum = 0, diagonalDifference = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (i == j)
                rightDiagonalSum += arr[i][j];
            if (i + j == arr.size() - 1)
                leftDiagonalSum += arr[i][j];
        }
    }
    diagonalDifference = abs(rightDiagonalSum - leftDiagonalSum);
    return diagonalDifference;
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
    int dimension;
    cin >> dimension;
    vector<vector<int>> arr(dimension, vector<int>(dimension));
    for (int i = 0; i < dimension; i++)
        for (int j = 0; j < dimension; j++)
            cin >> arr[i][j];
    
    cout<<diagonalDifference(arr)<<endl;
    return 0;
}