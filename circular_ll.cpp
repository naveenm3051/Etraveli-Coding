#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node()
    {
        val = 0;
        node *next = NULL;
    }
};
void take_input(node *start)
{
    char c;
    cout << "Enter the value of the node-->";
    cin >> start->val;
    cout << "Do you want to enter any other node(y/n)?" << endl;
    cin >> c;
    node *prev = start;
    if (c == 'y')
    {
        do
        {
            node *new_node = new node;
            cout << "enter the value of the node";
            cin >> new_node->val;
            prev->next = new_node;
            prev = new_node;
            cout << "Do you want to enter any other node(y/n)?" << endl;
            cin >> c;
        } while (c == 'y');
        prev->next = start;
    }
}
void print(node *start)
{
    node *nde = start;
    while (nde->next != start)
    {
        cout << nde->val << endl;
        nde = nde->next;
    }
    cout << nde->val;
}
int main()
{
    node *start;
    take_input(start);
    print(start);
    return 0;
}
