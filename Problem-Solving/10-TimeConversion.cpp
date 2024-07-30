#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string.h>
#define vec vector<ll>
#define ll long long int
using namespace std;

string timeConversion(string time)
{
    int hour = stoi(time.substr(0, 2));
    string hourString;
    if (time.substr(time.length() - 2) == "PM")
    {
        if (hour == 12)
            hourString.append(to_string(hour));
        else
            hourString.append(to_string(hour + 12));
    }
    else if (hour == 12)
        hourString.append("00");

    return (hourString + time.substr(2, time.length() - 4));
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

    string time;
    cin >> time;

    cout << timeConversion(time) << endl;

    return 0;
}