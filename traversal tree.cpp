#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	Node(int data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}
};
void preOrder(struct Node *node) 
{
	if(node==0)
	  return ;
	  
	cout<<node->data<<" ";
	preOrder(node->left);
	preOrder(node->right);
	
}
void inOrder(struct Node *node)
{
	if(node==0)
	  return ;

	inOrder(node->left);
	cout<<node->data<<" ";
	inOrder(node->right);
}
void postOrder(struct Node *node)
{
	if(node==0)
	  return ;

	postOrder(node->left);
	postOrder(node->right);
	cout<<node->data<<" ";
}
int main()
{
	struct Node *root=new Node(1);
	root->left=new Node(3);
	root->right=new Node(4);
	root->left->left=new Node(10);
	root->left->right=new Node(8);
	root->right->left=new Node(7);
	root->right->right=new Node(5);
	cout << "\nPreorder traversal of binary tree is \n"; 
    preOrder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    inOrder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    postOrder(root); 
  
    return 0; 
}

