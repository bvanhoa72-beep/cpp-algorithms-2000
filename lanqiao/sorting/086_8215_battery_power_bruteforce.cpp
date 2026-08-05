#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

// 个人打卡 #086
// 蓝桥云课题号：8215
// 题目：https://www.lanqiao.cn/problems/8215/learning/

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

    long long answer = LLONG_MIN;

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            // 公式不对称，因此要计算两块电池的两种排列顺序。
            long long first =
                batteries[i] * batteries[j] + batteries[i] - batteries[j];
            long long second =
                batteries[i] * batteries[j] + batteries[j] - batteries[i];

            answer = max({answer, first, second});
        }
    }

    cout << answer << '\n';
    return 0;
}
