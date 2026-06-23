#include<iostream>
using namespace std;
class ListNode
{
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val =  x;
        *next = NULL;
    }
};
 ListNode* reverseList(ListNode* head) {
        ListNode* temp = NULL;
        ListNode* row = head;
        while(row)
        {
            ListNode* tm = row;
            tm = tm->next;
            row->next =temp;
            temp = row;
            row = tm;
        }
        head = temp;
        return head;
}
int main()
{
    // listnode given in the problem
}