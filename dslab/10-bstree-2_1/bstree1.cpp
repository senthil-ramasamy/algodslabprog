#include"bstree.h"
#include<stdlib.h>
BSTree :: BSTree()
{
	root = NULL;
}
void BSTree :: add( int val)
{
	struct BSTreeNode *temp;
	temp = new BSTreeNode;
	temp->val = val;
	struct BSTreeNode *trav;
	trav= root;
	temp->left = NULL;
	temp->right = NULL;
	if(trav == NULL)
	{
		root = temp;
	}
	else
	{
		while(trav->left != NULL || trav->right != NULL)
		{
			if( val < trav->val)
			{
				trav = trav->left;	
			}
			else
			{
				trav = trav->right;
			}
		}	
		trav = temp;
	}

}
int BSTree :: search (int val)
{
	
	return 1;
} 
