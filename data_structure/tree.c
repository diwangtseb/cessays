#include <stdio.h>
#include <stdlib.h>

struct tree
{
    /* data */
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *create_tree(int data)
{
    struct tree *t = malloc(sizeof(struct tree));
    t->data = data;
    t->left = NULL;
    t->right = NULL;
    return t;
}

void insert_tree_left(struct tree *root, int data)
{
    root->left = create_tree(data);
}

void insert_tree_right(struct tree *root, int data)
{
    root->right = create_tree(data);
}

void tree_traversal_mid(struct tree *root)
{
    if (root == NULL)
        return;
    tree_traversal_mid(root->left);
    printf("item %d\n", root->data);
    tree_traversal_mid(root->right);
}

void tree_traversal_pre(struct tree *root)
{
    if (root == NULL)
        return;
    printf("item %d\n", root->data);
    tree_traversal_pre(root->left);
    tree_traversal_pre(root->right);
}

void tree_traversal_rear(struct tree *root)
{
    if (root == NULL)
        return;
    tree_traversal_rear(root->left);
    tree_traversal_rear(root->right);
    printf("item %d\n", root->data);
}


int main()
{
    struct tree *root = create_tree(0);
    insert_tree_left(root, 1);
    insert_tree_right(root, 2);
    tree_traversal_pre(root);
    tree_traversal_mid(root);
    tree_traversal_rear(root);
    return 0;
}