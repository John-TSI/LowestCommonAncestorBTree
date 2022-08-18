// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	TreeNode n10(4);
	TreeNode n9(7);
	TreeNode n7(8);
	TreeNode n6(0);
	TreeNode n5(2, &n9, &n10);
	TreeNode n4(6);
	TreeNode n3(1, &n6, &n7);
	TreeNode n2(5, &n4, &n5);
	TreeNode root(3, &n2, &n3);

	std::cout << Solution().lowestCommonAncestor(&root, &n2, &n3)->val;  // 3
	std::cout << Solution().lowestCommonAncestor(&root, &n2, &n10)->val;  // 5
	return 0;
}

