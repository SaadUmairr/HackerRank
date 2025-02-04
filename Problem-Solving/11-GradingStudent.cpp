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

vec gradingStudent(vec &grades)
{
    for (int i = 0; i < grades.size(); i++)
    {
        if (5 - (grades[i] % 5) < 3 && grades[i] >= 38)
            grades[i] += 5 - (grades[i] % 5);
    }
    return grades;
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

    int students, marks;
    vec grades;

    cin >> students;
    for (int i = 0; i < students; i++)
        cin >> marks, grades.push_back(marks);

    printArray(grades);
    gradingStudent(grades);
    printArray(grades);

    return 0;
}