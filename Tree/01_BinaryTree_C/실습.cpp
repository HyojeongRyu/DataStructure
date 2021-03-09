#include "½Ç½À.h"

MyBinaryTree::MyBinaryTree(){}

MyBinaryTree::~MyBinaryTree(){}

void MyBinaryTree::buildTree()
{

   for (int i = 1; i <= CAPACITY; i++)
   {
      nodes[i].data = 'A' + i - 1;
      nodes[i].left = NULL;
      nodes[i].right = NULL;
   }
   for (int i = 2; i <= CAPACITY; i++)
   {
      if (i % 2 == 0)
      {
         nodes[i / 2].left = &nodes[i];
      }
      else
      {
         nodes[i / 2].right = &nodes[i];
      }
   }
}

void MyBinaryTree::displayTree(int type)
{
   switch (type)
   {
   case 0:
      preorder(&nodes[1]); break;
   case 1:
      inorder(&nodes[1]); break;
   case 2:
      postorder(&nodes[1]); break;
   }
}

void MyBinaryTree::preorder(LPNODE ptr)
{
   if (ptr)
   {
      cout << char(ptr->data) << ' ';
      preorder(ptr->left);
      preorder(ptr->right);
   }
}

void MyBinaryTree::inorder(LPNODE ptr)
{
   if (ptr)
   {
      inorder(ptr->left);
      cout << char(ptr->data) << ' ';
      inorder(ptr->right);
   }
}

void MyBinaryTree::postorder(LPNODE ptr)
{
   if (ptr)
   {
      postorder(ptr->left);
      postorder(ptr->right);
      cout << char(ptr->data) << ' ';
   }
}
