//
// Created by suyang on 2022-8-16 0016.
//
#include "../tree.h"

#ifndef DATA_STRUCTURE_TREE_OPERATE_H
#define DATA_STRUCTURE_TREE_OPERATE_H

node *createNode(int item);

node *insertLeft(node *root, int value);

node *insertRight(node *root, int value);

void inorderTraversal(node *root);

void preorderTraversal(node *root);

void postorderTraversal(node *root);

int getNodeCount(node* root);

#endif //DATA_STRUCTURE_TREE_OPERATE_H
