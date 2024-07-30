#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void printArray(vec &arr)
{
    cout << endl;
    for (auto &tr : arr)
        cout << tr << '\t';
    cout << endl;
}

vec compareTheTriplets(vec a, vec b)
{
    int alice = 0;
    int bob = 0;
    vec answer(2);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            alice++;
        if (a[i] < b[i])
            bob++;
    }
    answer[0] = alice;
    answer[1] = bob;

    return answer;
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

    vec alice, bob, result;
    ll el;
    for (int i = 0; i < 3; i++)
        cin >> el, alice.push_back(el);

    for (int i = 0; i < 3; i++)
        cin >> el, bob.push_back(el);

    result = compareTheTriplets(alice, bob);

    printArray(result);

    return 0;
}