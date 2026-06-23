#include<iostream>
using namespace std;
class ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};
bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode*fast= head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = slow;
        ListNode* temp = NULL;
        while(fast)
        {
            ListNode* tm = fast;
            tm = tm->next;
            fast->next = temp;
            temp = fast;
            fast = tm;
        }
        fast = temp;
        slow = head;
        while(fast)
        {
            if(slow->val!=fast->val)
            return 0;
            slow = slow->next;
            fast = fast->next;
        }
        return 1;
}
int main()
{
    // listNode given in the problem 
}