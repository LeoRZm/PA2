// AVLNode.h
#ifndef AVL_NODE_H
#define AVL_NODE_H

template <typename T>
class AVLNode {
public:
    AVLNode(const T& data) : data(data), left(nullptr), right(nullptr), height(1) {}
    ~AVLNode() {}

    T data;
    AVLNode* left;
    AVLNode* right;
    int height;
};

#endif
