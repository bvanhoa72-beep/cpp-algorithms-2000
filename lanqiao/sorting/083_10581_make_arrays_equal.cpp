#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

// 个人打卡 #083
// 蓝桥云课题号：10581
// 题目：https://www.lanqiao.cn/problems/10581/learning/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    // 将两个数列分别升序排序，最接近的元素一一配对。
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long answer = 0;
    for (int i = 0; i < n; ++i)
    {
        answer += abs(a[i] - b[i]);
    }

    cout << answer << '\n';
    return 0;
}
