//
// Created by suyang on 2022-8-17 0017.
//

#include "balanced_binary_tree.h"
#include "../tree.h"
#include <stdbool.h>
#include <math.h>

bool is_balanced(node *root, int *height) {
    int leftHeight = 0, rightHeight = 0;
    bool leftIsBalanced = false, rightIsBalanced = false;
    if (root == NULL) {
        *height = 0;
        return true;
    }

    leftIsBalanced = is_balanced(root->left, &leftHeight);
    rightIsBalanced = is_balanced(root->right, &rightHeight);

    *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

    if (abs(leftHeight - rightHeight) >= 2)
        return false;
    else
        return leftIsBalanced && rightIsBalanced;
}
