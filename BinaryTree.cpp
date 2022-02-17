#include <iostream>
#include<queue>

using namespace std;

class node{
public:
	int data;
	node *left,*right;
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

node* BuildTree(node *root){
	root=NULL;
	int data;
	cout<<"Enter data ->";
	cin>>data;
	root=new node(data);

	if(data==-1) return NULL;
	cout<<"Enter data for left "<<data<<endl;
	root->left=BuildTree(root->left);
	cout<<"Enter data for right "<<data<<endl;
	root->right=BuildTree(root->right);

}

void inorder(node *root){
	if(root==NULL) return ;
	inorder(root->left);
	cout<<root->data<<" ,"<<" ";
	inorder(root->right);
}

void levelOrderTraversal(node *root){
	//binarytree level order traversal using queue
	queue<int> q;
	q.push(root->data);
	while(!q.empty()){
		int data=q.front();
		cout<<data<<" ,"<<" ";
		q.pop();
		if(root->left!=NULL) q.push(root->left->data);
		if(root->right!=NULL) q.push(root->right->data);
	}
	cout<<endl;
}

int main(void){
	node *root=NULL;
	root=BuildTree(root); // 5 4 8 -1 -1 6 4 -1 5 -1 -1 -1 -1
	cout<<endl;
	cout<<"inorder result ->"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"level order traversal ->"<<endl;
	levelOrderTraversal(root);
	return 0;
}