#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 个人打卡 #086
// 蓝桥云课题号：8215
// 题目：https://www.lanqiao.cn/problems/8215/learning/
// 解法二：排序后检查极端候选对

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> batteries(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> batteries[i];
    }

    sort(batteries.begin(), batteries.end());

    long long smallest_first =
        batteries[0] * batteries[1] + batteries[0] - batteries[1];
    long long smallest_second =
        batteries[0] * batteries[1] - batteries[0] + batteries[1];

    long long largest_first =
        batteries[n - 1] * batteries[n - 2] -
        batteries[n - 2] + batteries[n - 1];
    long long largest_second =
        batteries[n - 1] * batteries[n - 2] +
        batteries[n - 2] - batteries[n - 1];

    long long opposite_ends =
        batteries[0] * batteries[n - 1] +
        batteries[n - 1] - batteries[0];

    long long answer = max(
        {
            smallest_first,
            smallest_second,
            largest_first,
            largest_second,
            opposite_ends,
        }
    );

    cout << answer << '\n';
    return 0;
}
