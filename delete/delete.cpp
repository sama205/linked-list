#include <iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head;
void insert(int x)
{
     node* temp = new node;
     if(head == NULL)
     {
        head = temp;
        temp->data = x;
        temp->link = NULL;
        return;
    }
    temp->data = x;
    temp->link = NULL;
    node* temp2;
    temp2 = head;
    while(temp2->link != NULL)
   {
        temp2 = temp2->link;
    }
    temp2->link = temp;
}
void Delete (int n )
{
    node*temp1=head;
    if(n==1)
    {
        head =temp1->link;
        delete temp1;
        return ;
    }
    for(int i =0; i<n-2;i++)
    {
    temp1 = temp1-> link;
    node*temp2= temp2->link;
    delete temp2;
    }
}
void print()
{
    node* temp2 = head;
    while(temp2 != NULL)
    {
        cout<<temp2->data<<endl;
        temp2 = temp2->link;
    }
}
int main()
{
    head = NULL;
    int n,x,y;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for( int i = 0; i<n ; i++)
    {
        cin>>x;
        insert(x);
    }
    print();
 cout<<"Which of the elements do you want to delete?"<<  endl;
cin>>y;
Delete (y);
print();
}

