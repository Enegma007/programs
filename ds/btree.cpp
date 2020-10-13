#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		node(int d){
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};
class binarytree{
	public:
		node* root;
		binarytree(){
			this->root=NULL;
		}
		node* create(node*);
		node* insert(node*);
		node* display(node*);
		node* search(node*);
		node* deleten(node*);

};
node* binarytree::create(node* root){
	int d;
	cout<<"enter the data to enter as a root element..."<<"\n";
	cin>>d;
	node* temp=new node(d);
	root=temp;
	return root;
}
node* binarytree::insert(node* root){
	int d;
	cout<<"enter the data to insert new element..."<<"\n";
	cin>>d;
	node* temp=new node(d);
	queue<node*> q;
	// node* p=root;
	q.push(root);
	while(!q.empty()){
		node* p=q.front();
		q.pop();
		if(!p->left){
			p->left=temp;
			break;
		}
		else{
			q.push(p->left);
		}
		if(!p->right){
			p->right=temp;
			break;
		}
		else{
			q.push(p->right);
		}
	}
	return root;


}
node* binarytree::display(node* root){
	// node* p=root;
	if(!root){
		// cout<<"the tree is empty..."<<"\n";
		return root;
	}
	cout<<root->data<<"->";
	display(root->left);
	display(root->right);
}
node* binarytree::search(node* root){
	int d;
	cout<<"enter the data you want to search..."<<"\n";
	cin>>d;
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* p = q.front();
		q.pop();
		if(p->data==d){
			cout<<"hit"<<"\t"<<p->data<<"\n";
		}
		if(p->left!=NULL){
			q.push(p->left);
		}
		if(p->right!=NULL){
			q.push(p->right);
		}
	}
	return root;
}
// node* binarytree::deepest(node* root){

// }
int binarytree::
node* binarytree::deleten(node* root){
	if(!root){
		cout<<"deletion is not possible..."<<"\n";

	}
	else{
		int d;
		cout<<"Enter the value to delete...."<<"\n";

		

	}
}

int main(){
	binarytree* t=new binarytree();
	t->display(t->root);
	t->root=t->create(t->root);
	t->root=t->insert(t->root);
	t->root=t->insert(t->root);
	t->root=t->insert(t->root);
	t->root=t->insert(t->root);
	t->root=t->insert(t->root);
	t->display(t->root);
	t->root=t->search(t->root);
	return 0;

}