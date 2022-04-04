#include <iostream>
#include "binarytree.h"

using namespace std;

int main()
{
    BinaryTree a1, a2, a3, a4, a;
    Node *n1, *n2, *n3, *n4;

    n1 = a1.newTree(NULL, "Maria", NULL);
    n2 = a2.newTree(NULL,"Rodrigo", NULL);
    n3 = a3.newTree(n1, "Esperanza", n2);

    n1 = a1.newTree(NULL, "Anyora", NULL);
    n2 = a2.newTree(NULL, "Abel", NULL);
    n4 = a4.newTree(n1, "M Jesus", n2);
    n1 = a1.newTree(n3, "Esperanza", n4);
    a.rootPointer(n1);
}