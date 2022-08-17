//
// Created by suyang on 2022-8-16 0016.
//

#include "../tree.h"
#include "full_binary_tree.h"
#include <stdlib.h>

bool is_full_binary_tree(node *root) {
    if (root == NULL)return true;
    if (root->left == NULL && root->right == NULL)return true;
    if ((root->left) && (root->right)) {
        return is_full_binary_tree(root->left) && is_full_binary_tree(root->right);
    }
    return false;
}