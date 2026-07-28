#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

// 个人打卡 #084
// 蓝桥云课题号：3236
// 题目：https://www.lanqiao.cn/problems/3236/learning/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int budget;
    cin >> n >> budget;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int odd_count = 0;
    int even_count = 0;
    vector<int> costs;

    // 只有前缀中奇数和偶数数量相同时，才能在当前位置切割。
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] % 2 != 0)
        {
            ++odd_count;
        }
        else
        {
            ++even_count;
        }

        if (odd_count == even_count)
        {
            costs.push_back(abs(a[i + 1] - a[i]));
        }
    }

    // 优先选择成本最低的切割位置，使切割次数最多。
    sort(costs.begin(), costs.end());

    int answer = 0;
    for (int cost : costs)
    {
        if (cost > budget)
        {
            break;
        }

        budget -= cost;
        ++answer;
    }

    cout << answer << '\n';
    return 0;
}
