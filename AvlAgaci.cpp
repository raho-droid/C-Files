#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		int height;
		
};

Node* yeniNode(int x)
{
	Node *node = new Node();
	node -> data = x;
	node -> left = NULL;
	node -> right = NULL;
	node -> height = 1;
	return node;
}

int height(Node *node)
{
	if(node==NULL){
		return 0;
	}
	else{
		return node -> height;
	}
}


int max(int a,int b){
	return (a>b)?a:b;			//eðer a>b ise a deðilse b döndür.
	
	
}



Node* rRotate(Node *y)
{
	Node *x = y -> left;
	Node *t = x -> right;
	
	x -> right = y;
	y->left=t;

	y->height = max(height(y->left),height(y->right))+1;
	x->height = max(height(x->left),height(x->right))+1;
	return x;	
}










