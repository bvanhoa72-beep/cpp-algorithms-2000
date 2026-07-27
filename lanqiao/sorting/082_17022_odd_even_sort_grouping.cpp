#include <algorithm>
#include <iostream>
#include <vector>

// 个人打卡 #082
// 蓝桥云课题号：17022
// 题目：https://www.lanqiao.cn/problems/17022/learning/
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> odds;
    vector<int> evens;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if (x % 2 != 0)
        {
            odds.push_back(x);
        }
        else
        {
            evens.push_back(x);
        }
    }

    sort(odds.begin(), odds.end());
    sort(evens.begin(), evens.end());

    bool first = true;
    for (int x : odds)
    {
        if (!first)
        {
            cout << ' ';
        }
        cout << x;
        first = false;
    }

    for (int x : evens)
    {
        if (!first)
        {
            cout << ' ';
        }
        cout << x;
        first = false;
    }

    cout << '\n';
    return 0;
}
