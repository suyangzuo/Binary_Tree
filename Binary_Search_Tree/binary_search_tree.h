//
// Created by suyang on 2022-8-17 0017.
//

#include "../tree.h"
#include "../Common_Binary_Tree/common_binary_tree.h"
#include <stdlib.h>
#include <stdbool.h>

#ifndef DATA_STRUCTURE_BINARY_SEARCH_TREE_H
#define DATA_STRUCTURE_BINARY_SEARCH_TREE_H

node* insert(node* node, int item);
node* min_node(node* node);
node* delete_node(node* node, int item);
void inorder_print(node* root);

#endif //DATA_STRUCTURE_BINARY_SEARCH_TREE_H
