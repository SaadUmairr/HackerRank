// https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=false
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

string timeConversion(string s)
{
    string timeIn24;
    int hour = stoi(s.substr(0, 2));
    if (s.substr(8, 2) == "PM" || s.substr(8, 2) == "pm")
    {
        if (hour != 12)
            hour += 12;
    }
    else
    {
        if (hour == 12)
            hour = 0;
    }
    timeIn24 = (hour < 10 ? "0" : "") + to_string(hour) + s.substr(2, 6);
    return timeIn24;
}

int main()
{
    system("cls");
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    string timeIn12;
    cin >> timeIn12;
    cout << timeConversion(timeIn12);

    return 0;
}