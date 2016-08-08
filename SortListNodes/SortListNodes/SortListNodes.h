#pragma once
#include"ListNode.h"
#include<vector>
#include<algorithm>
class SortListNodes {
public:
	ListNode* SortList(ListNode* head) {
		if (!head) return nullptr;
		if (!head->next) return head;
		std::vector<int> NodeVal;
		for (ListNode* p = head; p; p = p->next)
			NodeVal.push_back(p->val);
		sort(NodeVal.begin(), NodeVal.end());
		ListNode *H = new ListNode(NodeVal[0]), *p = H;
		for (int i = 1, len = NodeVal.size(); i <len; i++, p = p->next)
			p->next = new ListNode(NodeVal[i]);
		return H;
	}
};