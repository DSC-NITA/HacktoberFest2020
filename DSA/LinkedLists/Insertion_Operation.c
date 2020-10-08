#include<stdio.h>
#include<stdlib.h>

//...data will store data....and link will store the next node address...
struct node                         
{
    int data;
    struct node* link;
};

//....initialising head pointer as NULL....
struct node* head=NULL;                             

//...create_node will create a new node with given data....
struct node* create_node(int data){
    struct node* newnode;
    newnode = (struct node*) malloc (sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
}

void Insert_At_Beginning( int data )                                   
{
    if(head == NULL)
    {
        head = create_node(data);
    }
    else
    {
        struct node* temp;
        temp = create_node(data);
        temp->link = head;
        head = temp;
    }
}

void Insert_At_Nth_Position(int data,int pos)
{
    struct node *temp, *temp1;
    temp = create_node(data);
    if(pos == 1)
    {
        temp->link = head;
        head = temp;
        return;
    }
    temp1 = head;
    int i = 0;
    while(i < pos-2)
    {
        temp1 = temp1->link;
        i++;
    }
    temp->link = temp1->link;
    temp1->link = temp;
}

void Insert_At_Last(int data)
{
    if(head == NULL)
    {
        head = create_node(data);
        return;
    }
    struct node* temp = head;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = create_node(data);
}

//....traversing the linked list....
void traverse_list()
{
    if(head == NULL)
         printf("List is empty\n");
    else
    {
        struct node* temp = head;
        printf("Linked list is: ");
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

struct node* create_node(int);
void Insert_At_Beginning(int);
void Insert_At_Nth_Position(int,int);
void Insert_At_Last(int);
void traverse_list(); 

//....Driver code to test the above insertions......
int main()
{
    Insert_At_Beginning(16);
    Insert_At_Last(25);
    Insert_At_Nth_Position(18,2);
    traverse_list();
    Insert_At_Beginning(14);
    Insert_At_Last(28);
    traverse_list();
    Insert_At_Nth_Position(21,4);
    traverse_list();
    return 0;
}
