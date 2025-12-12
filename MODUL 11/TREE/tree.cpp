#include <iostream>
#include "tree.h"

using namespace std;

void createTree_103032400036(adrNode &root){
    root = nullptr;
}

adrNode createNode_103032400036(infotype x){
    adrNode p;

    p = new Node;
    p->info = x;
    p->left = nullptr;
    p->right = nullptr;

    return p;
}

void insertNode_103032400036(adrNode &root, adrNode p){
    if (root == nullptr) {
        root = p;
    } else if (p->info < root->info) {
        insertNode_103032400036(root->left, p);
    } else {
        insertNode_103032400036(root->right,p);
    }
}

adrNode searchNode_103032400036(adrNode root, infotype x){
    if (root == nullptr){
        return nullptr;
    } else if (x < root->info) {
        return searchNode_103032400036(root->left, x);
    } else if (x > root->info) {
        return searchNode_103032400036(root->right, x);
    }
    return root;
}

void  displayTree_103032400036(adrNode root){
    if (root != nullptr){
        displayTree_103032400036(root->left);
        cout << root->info << " ";
        displayTree_103032400036(root->right);
    }
}

int countNodes_103032400036(adrNode root) {
    if (root == nullptr){
        return 0;
    } else {
        return 1 + countNodes_103032400036(root->left) + countNodes_103032400036(root->right);
    }
}

infotype getMinValue_103032400036(adrNode root){
    if (root == nullptr){
        return -1;
    }
    while (root->left != nullptr){
        root = root->left;
    }
    return root->info;
}

infotype getMaxValue_103032400036(adrNode root){
    if (root == nullptr){
        return -1;
    }
    while (root->right != nullptr){
        root = root->right;
    }
    return root->info;
}
