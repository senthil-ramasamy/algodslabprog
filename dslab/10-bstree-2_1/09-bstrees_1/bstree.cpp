#include"bstree.h"
#include<stdlib.h>
BSTree :: BSTree()
{
	root = NULL;
}
void BSTree :: add( int val)
{	
	//struct BSTreeNode * parent;
	struct BSTreeNode *temp;
	temp = new struct BSTreeNode;
	temp->val = val;
	struct BSTreeNode *trav;
	trav= root;
	temp->left = NULL;
	temp->right = NULL;
	//bool isleft = false;
	if(root == NULL)
	{
		root = temp;
		return;
		//cout<<"\n inserted root"<<root->val<<endl;
	}
	else
	{
		//parent = trav;
		//while( trav->left != NULL && trav->right != NULL)
		while(1)
		{
			if( val < trav->val)
			{
				if(trav->left == NULL)
				{
					trav->left = temp;
					return ;
				}
				trav = trav->left;	
				//isleft = true;
			}
			else
			{
				if(trav->right == NULL)
				{
					trav->right = temp;
					return ;
				}
				trav = trav->right;
			}
		}
	}
}
int BSTree :: search (int val)
{		
	struct BSTreeNode *trav;
	trav = root;
	while(trav != NULL )
	{
		if(trav->val == val)
			return 1;
		else if( trav->val > val)
		{
			if(trav->left == NULL)
				return 0;
			else
				trav = trav->left;
		}
		else if(trav->val <  val)
		{
			if(trav->right == NULL)
				return 0;
			else
				trav = trav->right;
		}
		
	}
	//cout<<"\n displaying";
	//display(root);
	return 0;
} 


void BSTree :: get_preorder(int *arr, int *count)
{
	preorder1(arr,count,root);	
}


void BSTree :: preorder1(int *arr,int *count,struct BSTreeNode *t)
{
	//static int i = 0;
	if(t == NULL)
	{
		return;
	}	
	//i = i +1;
	//cout<<endl<<i;
	arr[*count] = t->val;
	*count = *count + 1;
	//cout<<"\n"<<arr[i];
	preorder1(arr,count,t->left);
	preorder1(arr,count,t->right); 
	//*count =i;
	//cout<<"\n count "<<*count;
}



void BSTree :: postorder1(int *arr,int *count,struct BSTreeNode *t)
{
	//static int i = 0;
	if(t == NULL)
	{
		return;
	}	
	//i = i +1;
	//cout<<endl<<i;
	//arr[*count] = t->val;
	//*count = *count + 1;
	//cout<<"\n"<<arr[i];
	preorder1(arr,count,t->left);
	preorder1(arr,count,t->right); 
	arr[*count] = t->val;
	cout<<"\n "<<arr[*count];
	*count = *count +1;
	//*count =i;
	//cout<<"\n count "<<*count;
}


void BSTree :: preorder2(int *count,struct BSTreeNode *t)
{
	//static int i = 0;
	if(t == NULL)
	{
		return;
	}	
	//i = i +1;
	//cout<<endl<<i;
	if(t->right != NULL && t->left != NULL)
	*count = *count + 1;
	if(t->right != NULL && t->left == NULL)
	*count = *count +1;
	if(t->left != NULL && t->right == NULL)
	*count = *count + 1;
	//cout<<"\n"<<arr[i];
	//cout<<endl<<*count;
	preorder2(count,t->left);
	preorder2(count,t->right); 
	//*count =i;
	//cout<<"\n count "<<*count;
}

int BSTree :: get_height(void)
{

	int count =0;
	get_height_helper(root,count);
	return count;
}
int BSTree :: get_height_helper(struct BSTreeNode *root,int count)
{
	if(root == NULL)
			return 0;
	else
		count = count +1;
		return max(get_height_helper(root->left,count),get_height_helper(root->right,count));

}
void BSTree :: get_postorder(int *arr, int *count)
{

	postorder1(arr,count,root);
}
	
int BSTree :: count_non_leaf_nodes(void)
{
	int count = 0;
	preorder2(&count,root);
	return count;	
}
      

void BSTree :: display(struct BSTreeNode * trav)
{
	//cout<<"\n "<<trav->val;
	while(trav != NULL)
	{
		//display(trav->left);
		int n;
		cout<<"\n lakalak:";
		cin>>n;
		if(n)
		cout<<"\t"<<trav->val;
		display(trav->left);
		display(trav->right);
	}
		cout<<"\n one traversal done";
	
}
/*


struct BSTreeNode * BSTree :: insuc_find(struct BSTreeNode *t)
{
	//static int i = 0;
	if(t->left == NULL)
	{
		return;
	}	 
	//cout<<"\n"<<arr[i];
	//cout<<endl<<*count;
	insuc_find(val,t->left);
	insuc_find(val,t->right); 

	//cout<<"\n count "<<*count;
}
*/
	
void BSTree :: remove( int val)
{
	cout<<"\n value to be deleted :"<<val;
	struct BSTreeNode *trav,*todel,*parent;
	bool isleft=0;
	trav=root;	
	parent = root;
	while(trav != NULL )
	{
		if(trav->val == val)
		{
			todel = trav;
			break;
		}
		else if( trav->val > val)
		{
				parent = trav;
				isleft = 1;
				trav = trav->left;
		}
		else if(trav->val <  val)
		{
				parent = trav;
				isleft = 0;
				trav = trav->right;
		}
		
	}
	cout<<"\n located : "<<todel->val;
	cout<<"\n parent of located "<<parent->val;
	//case 1: when the node to be deleted is the leaf node 
	if(trav->left == NULL && trav->right == NULL)
	{
		cout<<"\n this is a case 1 problem";
		if(parent->left == trav)
			parent->left = NULL;
		else
			parent->right = NULL;
		free(trav);
		cout<<"\n done done london";
	}
	//case 2: if non leaf node and no right child
	if(trav->right == NULL && trav->left != NULL)
	{
		cout<<"\n this is a case 2 problem";
		if(parent->left == trav)
		{
			parent->left = trav->left;
			free(trav);
		}
		else
		{
			parent->right = trav->left;
			free(trav);
		}
		cout<<"\n done done london";
	}
	//case 3: if non leaf node and has a right child i.e inorder successor
	if(trav->right != NULL)
	{
		cout<<"\n this is a case 3 problem ";		
		//to find the inorder successor
		struct BSTreeNode *insuc,*insucp;
		insucp = trav;
		insuc = trav->right;
		if(insuc->left == NULL)
		{
			trav->val = insuc->val;	
			trav->right = insuc->right;
			free(insuc);
		}
		else
		{
			while(insuc->left != NULL)
			{
				insucp = insuc;
				insuc = insuc->left;
			}
			cout<<"\n the inorder successor is "<<insuc->val;
			cout<<"\n the inorder successor's parent is"<< insucp->val;
			trav->val = insuc->val;
			insucp->left = insucp->right;
		}	
	cout<<"\n done done london ";
	}
}
/*

void BSTree :: display1()
{
	//cout<<"\n "<<trav->val;
	struct BSTreeNode *trav;
	trav = root;
	while(trav != NULL)
	{
		display(trav->left);
		//int n;
		//cout<<"\n lakalak:";
		//cin>>n;
		cout<<"\t"<<trav->val;
		display(trav->right);
	}
}
*/
