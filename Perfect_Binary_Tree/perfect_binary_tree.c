//
// Created by suyang on 2022-8-16 0016.
//

#include "perfect_binary_tree.h"
#include <stdlib.h>
#include <stdbool.h>

int get_depth_perfect(node *node) {
    int depth = 0;
    while (node != NULL) {
        depth++;
        node = node->left;
    }
    return depth;
}

bool is_perfect(node *root, int depth, int level) {
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL)return depth == level + 1;
    if (root->left == NULL || root->right == NULL)return false;
    return is_perfect(root->left, depth, level + 1) && is_perfect(root->right, depth, level + 1);
}