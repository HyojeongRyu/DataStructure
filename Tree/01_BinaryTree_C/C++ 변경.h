#include <iostream>

#define CAPACITY	15	// node�� �Ѽ�

using namespace std;

// ��� ����ü
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}NODE, * LPNODE; //struct node�� NODE�� �������ϰ� node�� �����ͷ� LPNODE ����

class MyBinaryTree {
public:
	void MyBinarytree();
	void ~MyBinarytree();
	void buildTree();
	void displayTree(int type); //type:0(����),1(����),2(����)
};