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
	//level order traversal
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node *temp=q.front();
		q.pop();
		cout<<temp->data<<" ,"<<" ";
		if(temp->left!=NULL) q.push(temp->left);
		if(temp->right!=NULL) q.push(temp->right);
	}
	
}
int height(node *root){
	if(root==NULL) return 0;
	int le=height(root->left);
	int ri=height(root->right);
	return max(le,ri)+1;
}
node * inverTree(node *root){
	node *right=NULL;
	node *left=NULL;
	if(root==NULL) return NULL;
	left=inverTree(root->left);
	right=inverTree(root->right);
	root->left=right;
	root->right=left;
	return root;
}

int main(void){
	node *root=NULL;
	root=BuildTree(root); // 5 4 8 -1 -1 6 4 -1 5 -1 -1 -1 -1
	cout<<endl;
	inverTree(root);
	cout<<"inorder result ->"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"height of tree ->"<<endl;
	cout<<height(root);
	cout<<"level order traversal ->"<<endl;
	levelOrderTraversal(root);
	return 0;
}