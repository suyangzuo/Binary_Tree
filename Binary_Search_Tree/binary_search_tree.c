//
// Created by suyang on 2022-8-17 0017.
//

#include "binary_search_tree.h"
#include "../tree.h"
#include <stdio.h>

void inorder_print(node *root) {
    if (root == NULL)return;
    inorder_print(root->left);
    printf("%d -> ", root->item);
    inorder_print(root->right);
}

node *insert(node *node, int item) {
    if (node == NULL)return createNode(item);
    if (item < node->item)
        node->left = insert(node->left, item);
    else
        node->right = insert(node->right, item);
    return node;
}

node *min_node(node *root) {
    node *current = root;
    while (current && current->left)
        current = current->left;
    return current;
}

node *delete_node(node *root, int item) {
    if (root == NULL)return root;
    if (item < root->item)
        root->left = delete_node(root->left, item);
    else if (item > root->item)
        root->right = delete_node(root->right, item);
    else {
        if (root->left == NULL) {
            node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            node *temp = root->left;
            free(root);
            return temp;
        }
    }
}
