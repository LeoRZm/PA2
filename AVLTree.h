// AVLTree.h
#ifndef AVL_TREE_H
#define AVL_TREE_H

#include "AVLNode.h"
#include "AVLTree.tpp" // Implementations in a separate .tpp file

template <typename T>
class AVLTree {
public:
    AVLTree() : root(nullptr) {}
    ~AVLTree() {}

    int height();
    void insert(const T& value);
    int contains(const T& value);
    int validate();

private:
    AVLNode<T>* root;
};



#endif

