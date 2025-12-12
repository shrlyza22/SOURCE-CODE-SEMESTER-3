#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int infotype;
typedef struct Node *adrNode;
struct Node {
    infotype info;
    adrNode left;
    adrNode right;
} ;

void createTree_103032400036(adrNode &root);
adrNode createNode_103032400036(infotype x);
void insertNode_103032400036(adrNode &root, adrNode p);
adrNode searchNode_103032400036(adrNode root, infotype x);
void displayTree_103032400036(adrNode root);
int countNodes_103032400036(adrNode root);
infotype getMinValue_103032400036(adrNode root);
infotype getMaxValue_103032400036(adrNode root);
#endif // TREE_H_INCLUDED
