#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int val;
    node* next;
    node()
    {
        val = 0;
        node* next = NULL;
    }
};
int checkcycle(node * start)
{
    node * slow = start;
    node * fast = slow->next->next;
    while(fast->next!=slow && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast->next == slow)
    {
        return 1;
    }
    return 0;
}
int main()
{
    node * start = new node;
    start->val = 6;
    node * start_1 = new node;
    start->next = start_1;
    node *start_2 = new node;
    start_1->next = start_2 ;
    node *start_3 = new node;
    start_2->next = start_3;
    node* start_4 = new node;
    start_3->next = start_4;
    start_4->next = start_2;
    int x = checkcycle(start);
    if(x==1)
    {
        cout<<"Cycle Exist!"<<endl;
    }
    else{
        cout<<"Cycle Does not exist"<<endl;
    }
    return 0;
}