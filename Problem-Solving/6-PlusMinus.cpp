#include <iostream>
#include <vector>
#include <iomanip>
#define vec vector<ll>
#define ll long long int
using namespace std;

void plusMinus(vec arr)
{
    int postiveCounter = 0, negativeCounter = 0, zeroCounter = 0;
    int totalElements = arr.size();

    for (auto &element : arr)
    {
        if (element > 0)
            postiveCounter++;
        else if (element < 0)
            negativeCounter++;
        else
            zeroCounter++;
    }

    cout << fixed << setprecision(6) << static_cast<double>(postiveCounter) / totalElements << endl;
    cout << fixed << setprecision(6) << static_cast<double>(negativeCounter) / totalElements << endl;
    cout << fixed << setprecision(6) << static_cast<double>(zeroCounter) / totalElements << endl;
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

    plusMinus(arr);

    return 0;
}
