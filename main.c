//
// Created by suyang on 2022-8-16 0016.
//

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "Common_Binary_Tree/common_binary_tree.h"
//#include "Full_Binary_Tree/full_binary_tree.h"
//#include "Perfect_Binary_Tree/perfect_binary_tree.h"

int main(void) {
    node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->left->right->left = createNode(6);
    root->left->right->right = createNode(7);


//    printf("%d\n", is_full_binary_tree(root));

    /*insertLeft(root, 12);
    insertRight(root, 9);

    insertLeft(root->left, 5);
    insertRight(root->left, 6);

    printf("Inorder Traversal:\n");
    inorderTraversal(root);

    printf("\n\n");

    printf("Preorder Traversal:\n");
    preorderTraversal(root);

    printf("\n\n");

    printf("Postorder Traversal:\n");
    postorderTraversal(root);*/
}
