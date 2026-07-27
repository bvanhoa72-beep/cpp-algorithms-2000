#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 个人打卡 #082
// 蓝桥云课题号：17022
// 题目：https://www.lanqiao.cn/problems/17022/learning/

// cmp(x, y) 返回 true，表示 x 应该排在 y 前面
bool cmp(int x, int y)
{
    // 奇偶性不同：奇数在前，偶数在后
    if (x % 2 != y % 2)
    {
        return x % 2 != 0;
    }

    // 奇偶性相同：按照数值从小到大排列
    return x < y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), cmp);

    for (int i = 0; i < n; ++i)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << a[i];
    }

    cout << '\n';
    return 0;
}
