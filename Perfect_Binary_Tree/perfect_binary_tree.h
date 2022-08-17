//
// Created by suyang on 2022-8-16 0016.
//

#include "../tree.h"
#include <stdbool.h>

#ifndef DATA_STRUCTURE_PERFECT_BINARY_TREE_H
#define DATA_STRUCTURE_PERFECT_BINARY_TREE_H

int get_depth_perfect(node *node);

bool is_perfect(node *root, int depth, int level);

#endif //DATA_STRUCTURE_PERFECT_BINARY_TREE_H
