/*#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Function to insert a node at the end (to create the list)
void insertAtEnd(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Function to delete the last node and insert it at the beginning
void moveLastToFront(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
        return; // list empty or only one node

    Node *secondLast = head;
    while (secondLast->next->next != nullptr)
    {
        secondLast = secondLast->next;
    }

    Node *last = secondLast->next; // last node
    secondLast->next = nullptr;    // remove last node

    // insert at front
    last->next = head;
    head = last;
}

int main()
{
    Node *head = nullptr;
    int n, value;

    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "Original linked list: ";
    printList(head);

    moveLastToFront(head);

    cout << "After moving last node to front: ";
    printList(head);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a node at the end
void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to move last node to front
void moveLastToFront(struct Node **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return; // empty or single node

    struct Node *secondLast = *head;
    while (secondLast->next->next != NULL)
    {
        secondLast = secondLast->next;
    }

    struct Node *last = secondLast->next;
    secondLast->next = NULL;

    last->next = *head;
    *head = last;
}

int main()
{
    struct Node *head = NULL;
    int n, value;

    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        insertAtEnd(&head, value);
    }

    printf("Original linked list: ");
    printList(head);

    moveLastToFront(&head);

    printf("After moving last node to front: ");
    printList(head);

    return 0;
}
