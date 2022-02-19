#include <iostream>
#include<queue>
#include<vector>

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

bool isPresent(node *root,int ele){
	if(root==NULL) return false;
	if(root->data==ele) return true;
	isPresent(root->left,ele);
	isPresent(root->right,ele);
}

void leftView(vector<int> &v,node *root,int lvl){
	if(root==NULL) return ;
	if(lvl==v.size())
	   v.push_back(root->data);
	leftView(v,root->left,lvl+1);
	leftView(v,root->right,lvl+1);

}

void righttView(vector<int> &v,node *root,int lvl){
	if(root==NULL) return ;
	if(lvl==v.size())
	   v.push_back(root->data);
	leftView(v,root->right,lvl+1);
	leftView(v,root->left,lvl+1);
	
}

int main(void){

	/*//sample binary tree
	*   4
	* 3   5
	7  2     6
	            9
	*
	*/


	node *root=NULL;
	vector<int> v; 
	vector<int> ri;
	root=BuildTree(root); // creation of tree
	cout<<endl; //printing new line
	leftView(v,root,0); //stores the left view of the Binary tree in the vectot v;
	for(auto i:v){  //prints the vector
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"<---------------separator------------------->"<<endl; ///line separator
	righttView(ri,root,0); ////stores the right view of the Binary tree in the vectot ri
	for(auto i:ri){  ///prints the  vector
		cout<<i<<" ";
	}
	/*inverTree(root);				 //swaps the data of child nodes from left to right;
	cout<<"inorder result ->"<<endl;
	inorder(root); 		//inorder traversal	
	cout<<endl;
	cout<<"height of tree ->"<<endl;
	cout<<height(root);  		//returs the height of binary treee
	cout<<"level order traversal ->"<<endl;
	levelOrderTraversal(root);    ///Level Order Traversal of Binary tree 
	bool res=isPresent(root,5);  ///search operation in binary tree \\return trur if element found else false
	if(res)
	   cout<<"The Element is present" <<"  "<<res ;
	else 
	  cout<<"Noop!";*/
	delete root;

	return 0;
}