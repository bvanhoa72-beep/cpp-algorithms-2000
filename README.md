# 🚀 C++ 算法刷题记录

这里记录我的 C++ 算法训练过程。仓库从个人打卡 **第 82 题**开始正式同步，之前完成的题目以 CSDN 记录为主，不强行补齐 GitHub 文件。

## 🧭 当前路线

| 阶段 | 训练内容 | 状态 |
| --- | --- | --- |
| 1 | 蓝桥杯算法赛题单：模拟、枚举 | ✅ 已完成（旧题暂不补录） |
| 2 | 蓝桥杯算法赛题单：排序 | 🚧 进行中，从题号 17022 开始同步 |
| 3 | 蓝桥杯后续专题：贪心、哈希、二分、搜索、DP | ⏳ 待解锁 |
| 4 | LeetCode Hot 100 | ⏳ 计划中 |
| 5 | Codeforces 周赛 | ⏳ 持续参赛 |

## 📂 仓库结构

```text
cpp-algorithms-2000/
├── lanqiao/                 # 蓝桥杯算法赛题单
│   ├── README.md            # 题单阶段与蓝桥杯索引
│   └── sorting/             # 当前：排序专题
│       ├── 082_17022_odd_even_sort.md
│       ├── 082_17022_odd_even_sort_grouping.cpp
│       ├── 082_17022_odd_even_sort_comparator.cpp
│       ├── 083_10581_make_arrays_equal.cpp
│       ├── 084_3236_cutting.cpp
│       ├── 085_3660_smallest_concatenation.cpp
│       ├── 086_8215_battery_power.md
│       ├── 086_8215_battery_power_bruteforce.cpp
│       └── 086_8215_battery_power_sorting.cpp
├── leetcode/
│   └── hot-100/             # 后续力扣 Hot 100
├── codeforces/
│   └── contests/            # 后续 CF 周赛
└── archive/
    └── early-records/       # 正式同步前的旧代码
```

目录先按平台区分，再按训练路线分类。每道题默认保存一个 `.cpp` 文件；有多种值得记录的解法时，使用相同文件名前缀分别保存。详细笔记使用同名前缀的 `.md` 文件，避免“一题一目录”带来的层级过深问题。

## ✅ 正式打卡记录

| 个人编号 | 平台题号 | 题目 | 平台 | 专题 | 题目链接 | 笔记与源码 |
| ---: | ---: | --- | --- | --- | --- | --- |
| 082 | 17022 | 奇偶排序【算法赛】 | 蓝桥云课 | 排序 | [题目](https://www.lanqiao.cn/problems/17022/learning/) | [笔记](lanqiao/sorting/082_17022_odd_even_sort.md) |
| 083 | 10581 | 修改相同数列 | 蓝桥云课 | 排序、贪心 | [题目](https://www.lanqiao.cn/problems/10581/learning/) | [C++](lanqiao/sorting/083_10581_make_arrays_equal.cpp) |
| 084 | 3236 | 切割 | 蓝桥云课 | 排序、贪心、前缀统计 | [题目](https://www.lanqiao.cn/problems/3236/learning/) | [动画与笔记](lanqiao/sorting/084_3236_cutting.md) |
| 085 | 3660 | 小蓝爱串串 | 蓝桥云课 | 排序、自定义比较函数、字符串 | [题目](https://www.lanqiao.cn/problems/3660/learning/) | [C++](lanqiao/sorting/085_3660_smallest_concatenation.cpp) |
| 086 | 8215 | 电池 | 蓝桥云课 | 枚举、排序、数学 | [题目](https://www.lanqiao.cn/problems/8215/learning/) | [笔记与两种解法](lanqiao/sorting/086_8215_battery_power.md) |

## 🏷️ 文件命名

- 蓝桥杯：`个人编号_平台题号_英文题名.cpp`
- LeetCode：`序号_题号_英文题名.cpp`
- Codeforces：按比赛保存，例如 `round-xxxx/A.cpp`
- 文件名统一使用小写英文与下划线，链接稳定且跨平台兼容

## 📝 CSDN

- [【算法日记 #01】位运算精华总结：XOR 与 OR 的实战模型](https://blog.csdn.net/aqiu111111/article/details/159054591)

从第 82 题起，CSDN 文章中的源码链接将指向本仓库对应文件。

---

> 依次打卡，持续进化。
