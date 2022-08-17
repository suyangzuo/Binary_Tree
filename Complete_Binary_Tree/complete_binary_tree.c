//
// Created by suyang on 2022-8-17 0017.
//

#include "complete_binary_tree.h"
#include <stdbool.h>

bool is_complete(node *root, int index, int nodeCount) {
    if (root == NULL) return true;
    if (index >= nodeCount)return false;
    return (is_complete(root->left, index * 2 + 1, nodeCount) &&
            is_complete(root->right, index * 2 + 2, nodeCount));
}
