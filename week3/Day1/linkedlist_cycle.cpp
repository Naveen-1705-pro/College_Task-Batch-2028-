#include<iostream>
#include<vector>
using namespace std;
// main code for the linkedlist cycle
bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast)
            return 1;
        }
        return 0;
}
int main()
{
    // ListNode given in the problem //
}