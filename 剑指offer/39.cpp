#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
int majorityElement(vector<int>& nums);
int main(){

	return 0;
}
int majorityElement(vector<int>& nums){
	int candidate = 0, count = 0;
	for (int& num : nums){
		if (count == 0)	candidate = num;
		count += num == candidate ? 1 : -1;
	}
	return candidate;
}

/*
方法五：Boyer-Moore 投票算法
思路

如果我们把众数记为 +1+1，把其他数记为 -1?1，将它们全部加起来，显然和大于 0，从结果本身我们可以看出众数比其他数多。

算法

Boyer-Moore 算法的本质和方法四中的分治十分类似。我们首先给出 Boyer-Moore 算法的详细步骤：

我们维护一个候选众数 candidate 和它出现的次数 count。初始时 candidate 可以为任意值，count 为 0；

我们遍历数组 nums 中的所有元素，对于每个元素 x，在判断 x 之前，如果 count 的值为 0，我们先将 x 的值赋予 candidate，随后我们判断 x：

如果 x 与 candidate 相等，那么计数器 count 的值增加 1；

如果 x 与 candidate 不等，那么计数器 count 的值减少 1。

在遍历完成后，candidate 即为整个数组的众数。

https://leetcode-cn.com/problems/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof/solution/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-pvh8/
*/
