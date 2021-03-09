#include <iostream>
#define CAPACITY 15

using namespace std;

typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}NODE, * LPNODE;

class MyBinaryTree
{
	NODE nodes[CAPACITY + 1];
	
public:
	MyBinaryTree();
	~MyBinaryTree();
	void buildTree();
	void displayTree(int type);
	void preorder(LPNODE ptr);
	void inorder(LPNODE ptr);
	void postorder(LPNODE ptr);
};