// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <iomanip>
#define vec vector<ll>
#define ll long long int
using namespace std;

double plusMinus(vec arr)
{
    int positiveCounter = 0, negativeCounter = 0, zeroCounter = 0;
    double positiveRatio, negativeRatio, zeroRatio;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            positiveCounter++;
        if (arr[i] < 0)
            negativeCounter++;
        if (arr[i] == 0)
            zeroCounter++;
    }
    cout << "positiveCounter: " << positiveCounter << endl
         << "negativeCounter: " << negativeCounter << endl
         << "zeroCounter: " << zeroCounter << endl
         << "size: " << arr.size() << endl;
    positiveRatio = static_cast<double>(positiveCounter) / arr.size();
    negativeRatio = static_cast<double>(negativeCounter) / arr.size();
    zeroRatio = static_cast<double>(zeroCounter) / arr.size();
    cout << fixed << setprecision(6) << positiveRatio << endl;
    cout << fixed << setprecision(6) << negativeRatio << endl;
    cout << fixed << setprecision(6) << zeroRatio << endl;
    return 0;
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

    plusMinus(arr);

    return 0;
}