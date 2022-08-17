//
// Created by suyang on 2022-8-16 0016.
//

#include "../tree.h"
#include "common_binary_tree.h"
#include <stdlib.h>
#include <stdio.h>

node *createNode(int item) {
    node *newNode = (node *) malloc(sizeof(node));
    newNode->item = item;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

node *insertLeft(node *root, int value) {
    root->left = createNode(value);
    return root->left;
}

node *insertRight(node *root, int value) {
    root->right = createNode(value);
    return root->right;
}

void inorderTraversal(node *root) {
    if (root == NULL)return;
    inorderTraversal(root->left);
    printf("%d -> ", root->item);
    inorderTraversal(root->right);
}

void preorderTraversal(node *root) {
    if (root == NULL)return;
    printf("%d -> ", root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(node *root) {
    if (root == NULL)return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d -> ", root->item);
}

int getNodeCount(node *root) {
    if (root == NULL)return 0;
    return (getNodeCount(root->left) + getNodeCount(root->right) + 1);
}