// https://www.hackerrank.com/challenges/grading/problem
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define vec vector<ll>
#define ll long long int
using namespace std;

vec gradingStudents(vec &grades)
{
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < 38)
            continue;
        else if (5 - (grades[i] % 5) < 3)
            grades[i] += 5 - (grades[i] % 5);
    }
    return grades;
}

int main()
{
    system("cls");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vec grades(n);
    for (int i = 0; i < n; i++)
        cin >> grades[i];
    gradingStudents(grades);
    return 0;
}