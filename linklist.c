/*Given a single linked list and an integer x your task is to complete the function deleteAllOccurences which deletes all occurrences of a key x present in the linked list. The function takes two arguments: the head of the linked list and an integer x. The function should return the head of the modified linked list.
 

Input: 
The first line of input contains an integer N denoting the no of elements of the linked list. Then in the next line are N space separated values of the linked list. The third line of each test case contains an integer x.

Output: 
The output for each test case will be the space separated value of the returned linked list.

Sample Input & Output1: 
5
2 2 1 4 4
Enter the element to be deleted: 4
The list after deletion: 2 2 1*/

#include<stdio.h>
#include<stdlib.h>
//void push(struct node**, int);
//void deleteAllOccurences(struct node**, int);
//void printList(struct node*);
 int i=0;
 int a[50];
struct node
{
    int data;
    struct node *next;
};

void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void deleteAllOccurences(struct node **head_ref, int x)
{
    struct node* temp = *head_ref, *prev;
    while(temp != NULL && temp->data == x)
    {
        *head_ref = temp->next;
        free(temp);
        temp = *head_ref;
    }
    while(temp != NULL)
    {
        while(temp != NULL && temp->data != x)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp==NULL)
        return;
        prev->next = temp->next;
        free(temp);
        temp = prev->next;
    }
}
void printList(struct node* node)
{
    int max=0;
    //while(node!=NULL)
    do
    {
       
       
        a[i]=node->data;
        //printf("%d ",node->data);
        node=node->next;
        i++;
        if (node==NULL)
        {
            max = i;
        }
    }while(node!=NULL);
    for (i=max-1 ; i>=0 ;i--)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    struct node*head=NULL;
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        push(&head,j);
    }
    int x;
    printf("Enter the element to be deleted: ");
    scanf("%d",&x);
    //puts("Created Linked List:");
    //printList(head);
    deleteAllOccurences(&head, x);
    printf("\nThe list after deletion: ");
    printList(head);
    return 0;
}
