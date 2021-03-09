#include <iostream>

#define CAPACITY	15	// node의 총수

using namespace std;

// 노드 구조체
typedef struct node
{
	int data;
	struct node* left;
	struct node* right;
}NODE, * LPNODE; //struct node를 NODE로 재정의하고 node의 포인터로 LPNODE 선언

class MyBinaryTree {
public:
	void MyBinarytree();
	void ~MyBinarytree();
	void buildTree();
	void displayTree(int type); //type:0(전위),1(중위),2(후위)
};