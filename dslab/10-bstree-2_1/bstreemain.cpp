#include"bstree.h"
int main()
{
	BSTree t1;
	t1.add(10);
	t1.display();
	t1.add(20);
	t1.display();
	return 0;
}
/*
    struct BSTreeNode
    {
        int val;
        struct BSTreeNode *left;
        struct BSTreeNode *right;
    };

    class BSTree
    {
        struct BSTreeNode *root;

    public:
        BSTree();
        void add(int val);
        int search(int val);
    };

*/
