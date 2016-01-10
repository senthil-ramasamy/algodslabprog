#include<iostream>
using namespace std;
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
	void display( struct BSTreeNode * );
	void get_preorder(int *arr, int *count);
    	int count_non_leaf_nodes(void);
	void preorder1(int *arr,int *count,struct BSTreeNode *t);
	void remove(int val);
	void preorder2(int *count,struct BSTreeNode *t);
};
