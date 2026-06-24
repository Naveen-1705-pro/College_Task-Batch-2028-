#include<iostream>
using namespace std;
class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* head = new ListNode(0); // temporary create //
        ListNode* temp = head;
        ListNode* prev = temp;
        while(temp1 && temp2)
        {
            if(temp1->val<=temp2->val)
            {
                temp = new ListNode(temp1->val);
                prev->next = temp;
                prev = temp;
                temp1 = temp1->next;
            }
            else if(temp1->val>temp2->val)
            {
                temp = new ListNode(temp2->val);
                prev->next = temp;
                prev = temp;
                temp2 = temp2->next;
            }
        }
        while(temp1)
        {
                temp = new ListNode(temp1->val);
                prev->next = temp;
                prev = temp;
                temp1 = temp1->next;
        }
        while(temp2)
        {
                temp = new ListNode(temp2->val);
                prev->next = temp;
                prev = temp;
                temp2 = temp2->next; 
        }
        temp->next = NULL;
        temp = head;
        head = temp->next;
        delete temp;
        return head;
}
int main()
{
    // listNode given in the problem 
}