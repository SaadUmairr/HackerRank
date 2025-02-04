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

vec breakingRecord(vec &records)
{
    vec minMax;
    int maxCounter = 0, minCounter = 0;
    int minScore = records[0], maxScore = records[0];
    for (int i = 1; i < records.size(); i++)
    {
        if (records[i] > maxScore)
            maxScore = records[i], maxCounter++;

        if (records[i] < minScore)
            minScore = records[i], minCounter++;
    }
    minMax.push_back(maxCounter);
    minMax.push_back(minCounter);

    return minMax;
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

    int games, score;
    cin >> games;

    vec record(games), result;

    for (int i = 0; i < games; i++)
        cin >> score, record[i] = score;

    result = breakingRecord(record);
    printArray(result);

    return 0;
}