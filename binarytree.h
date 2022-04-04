/** Dulce Adelina Zuñiga Ramos
 *  31/03/2022
 *  Binary Trees */ 
#include <string>
typedef std::string ElementType;

class Node
{
    protected:
        ElementType data;
        Node *left;
        Node *right;
    public:
        Node(ElementType value)
        {
            data = value;
            left = right = NULL;
        }
        Node(ElementType value, Node* leftLink, Node* rightLink)
        {
            data = value;
            left = leftLink;
            right = rightLink;
        }
        // access operations
        ElementType valueNode() { return data; }
        Node* leftSubtree() { return left; }
        Node* rightSubtree() { return right; }

        // alter operations
        void newValue(ElementType d) { data = d; }
        void leftSubtree(Node* n) { left = n; }
        void rightSubtree(Node* n) { right = n; }
};

class BinaryTree
{
    protected:
        Node *root;
    public: 
        BinaryTree()
        {
            root = nullptr;
        }

        BinaryTree(Node *r)
        {
            root = r;
        }

        void rootPointer(Node *r)
        {
            root = r;
        }

        Node* ObtainRoot()
        {
            return root;
        }

        Node TreeRoot()
        {
            if(root)
                return *root;
            else
                throw "empty tree";
        }

        bool isEmpty()
        {
            return root == nullptr;
        }

        Node *leftChildren()
        {
            if(root)
                return root->leftSubtree();
            else
                throw "empty tree";
        }

        Node *rightChildren()
        {
            if(root)
                return root->rightSubtree();
            else
                throw "empty tree";
        }

        Node* newTree( Node* leftLink, ElementType data,Node* rightLink)
        {
            return new Node(data, leftLink, rightLink);
        }
};