typedef int ElementType;

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