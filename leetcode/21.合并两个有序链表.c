/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


#include<stdio.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    struct ListNode* head;
    struct ListNode* temp;
    if (list1->val >= list2->val)
    {
        head = list2;
        list2 = list2->next;
    }
    else
    {
        head = list1;
        list1 = list1->next;
    }
    temp = head;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val >= list2->val)
        {
            temp->next = list2;
            list2 = list2->next;
        }
        else
        {
            temp->next = list1;
            list1 = list1->next;
        }
        temp = temp->next;
    }
    if (list1 != NULL)
    {
        temp->next = list1;
    }
    if (list2 != NULL)
    {
        temp->next = list2;
    }
    return head;
}
// @lc code=end

