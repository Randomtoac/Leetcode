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
�����壺Boyer-Moore ͶƱ�㷨
˼·

������ǰ�������Ϊ +1+1������������Ϊ -1?1��������ȫ������������Ȼ�ʹ��� 0���ӽ���������ǿ��Կ����������������ࡣ

�㷨

Boyer-Moore �㷨�ı��ʺͷ������еķ���ʮ�����ơ��������ȸ��� Boyer-Moore �㷨����ϸ���裺

����ά��һ����ѡ���� candidate �������ֵĴ��� count����ʼʱ candidate ����Ϊ����ֵ��count Ϊ 0��

���Ǳ������� nums �е�����Ԫ�أ�����ÿ��Ԫ�� x�����ж� x ֮ǰ����� count ��ֵΪ 0�������Ƚ� x ��ֵ���� candidate����������ж� x��

��� x �� candidate ��ȣ���ô������ count ��ֵ���� 1��

��� x �� candidate ���ȣ���ô������ count ��ֵ���� 1��

�ڱ�����ɺ�candidate ��Ϊ���������������

https://leetcode-cn.com/problems/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof/solution/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-pvh8/
*/
