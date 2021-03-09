#include "실습.h"

int main()
{
	MyBinaryTree bt;

	bt.buildTree();

	cout << "전위" << endl;
	bt.displayTree(0);
	cout << endl;

	cout << "중위" << endl;
	bt.displayTree(1);
	cout << endl;

	cout << "후위" << endl;
	bt.displayTree(2);
	cout << endl;

}