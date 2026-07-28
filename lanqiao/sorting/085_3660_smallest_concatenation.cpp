#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 个人打卡 #085
// 蓝桥云课题号：3660
// 题目：https://www.lanqiao.cn/problems/3660/learning/

bool cmp(const string &a, const string &b)
{
    // 如果 a + b 的字典序更小，就让 a 排在 b 前面。
    return a + b < b + a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int string_length;
    cin >> n >> string_length;

    vector<string> strings(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> strings[i];
    }

    sort(strings.begin(), strings.end(), cmp);

    string result;
    result.reserve(static_cast<size_t>(n) * string_length);
    for (const string &s : strings)
    {
        result += s;
    }

    cout << result << '\n';
    return 0;
}
