#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

void stairCase(int size)
{

    int spaces = size - 1, rows = size, symbols = rows - spaces;
    while (rows--)
    {
        for (int i = 0; i < spaces; i++)
            cout << " ";
        for (int i = 0; i < symbols; i++)
            cout << "#";
        cout << endl;
        spaces--;
        symbols++;
    }
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

    stairCase(size);

    return 0;
}