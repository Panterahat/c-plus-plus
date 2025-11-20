/*#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Insert a value
Node *insertNode(Node *root, int value)
{
    if (root == nullptr)
    {
        root = new Node{value, nullptr, nullptr};
        return root;
    }
    if (value < root->data)
        root->left = insertNode(root->left, value);
    else
        root->right = insertNode(root->right, value);

    return root;
}

// Search a value
bool searchNode(Node *root, int value)
{
    if (root == nullptr)
        return false;
    if (root->data == value)
        return true;
    if (value < root->data)
        return searchNode(root->left, value);
    return searchNode(root->right, value);
}

// Find minimum value (needed for delete)
Node *findMin(Node *root)
{
    while (root->left != nullptr)
        root = root->left;
    return root;
}

// Delete a value
Node *deleteNode(Node *root, int value)
{
    if (root == nullptr)
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else
    {
        // Case 1: No child
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        // Case 2: One child
        else if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Inorder traversal (sorted order)
void inorder(Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = nullptr;
    int choice, value;

    while (true)
    {
        cout << "\n1.Insert  2.Delete  3.Search  4.Traverse  5.Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            cin >> value;
            root = insertNode(root, value);
        }
        else if (choice == 2)
        {
            cin >> value;
            root = deleteNode(root, value);
        }
        else if (choice == 3)
        {
            cin >> value;
            if (searchNode(root, value))
                cout << "Found\n";
            else
                cout << "Not Found\n";
        }
        else if (choice == 4)
        {
            inorder(root);
            cout << endl;
        }
        else
            break;
    }

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Insert a value
struct Node *insertNode(struct Node *root, int value)
{
    if (root == NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }
    if (value < root->data)
        root->left = insertNode(root->left, value);
    else
        root->right = insertNode(root->right, value);

    return root;
}

// Search a value
int searchNode(struct Node *root, int value)
{
    if (root == NULL)
        return 0;
    if (root->data == value)
        return 1;
    if (value < root->data)
        return searchNode(root->left, value);
    return searchNode(root->right, value);
}

// Find minimum value (needed for delete)
struct Node *findMin(struct Node *root)
{
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Delete a value
struct Node *deleteNode(struct Node *root, int value)
{
    if (root == NULL)
        return root;

    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else
    {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        // Case 2: One child
        else if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Two children
        struct Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Inorder traversal (sorted order)
void inorder(struct Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main()
{
    struct Node *root = NULL;
    int choice, value;

    while (1)
    {
        printf("\n1.Insert  2.Delete  3.Search  4.Traverse  5.Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            scanf("%d", &value);
            root = insertNode(root, value);
        }
        else if (choice == 2)
        {
            scanf("%d", &value);
            root = deleteNode(root, value);
        }
        else if (choice == 3)
        {
            scanf("%d", &value);
            if (searchNode(root, value))
                printf("Found\n");
            else
                printf("Not Found\n");
        }
        else if (choice == 4)
        {
            inorder(root);
            printf("\n");
        }
        else
            break;
    }

    return 0;
}
