#include<iostream>
using namespace std;
class ListNode
{
    public:
    int val;
    ListNode*next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =0;
        ListNode* temp = head;
        while(temp)
        {
            count++;
            temp =temp->next;
        }
        count = count-n;
        temp = head;
        ListNode* prev = NULL;
        while(count--)
        {
            prev = temp;
            temp = temp->next;
            // cout<<prev->val<<" "<<temp->val<<endl;
        }
        if(prev!=NULL)
        {
            // ListNode* temp1 = temp;
            prev->next  = temp->next;
            delete temp;
        }
        else
        {
            head = temp->next;
            delete temp;
        }
        return head;
}
int main()
{
    // ListNode given in the problem
}