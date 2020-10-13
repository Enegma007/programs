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
class binarysearchtree{
	public:
		node* root;
		binarysearchtree(){
			this->root=NULL;

		}
		node* create(node*);
		node* insert(node*);
		node* search(node*);
		node* display(node*);
};
node* binarysearchtree::create(node* root){
	int d;
	cout<<"enter the data for root element.."<<"\n";
	cin>>d;
	node* temp=new node(d);
	root=temp;
	return root;

}
node* binarysearchtree::insert(node* root){
	int d;
	cout<<"enter the data to insert in the bst..."<<"\n";
	cin>>d;
	node* temp=new node(d);
	node* p=root;
	node* r=NULL;
	while(p!=NULL){
		r=p;
		if(d<p->data){
			p=p->left;
		}
		else{
			p=p->right;
		}

	}
	if(r==NULL){
		cout<<"NULL"<<"\n";
	}
	else{
		if(d<r->data){
			r->left=temp;
		}
		else{
			r->right=temp;
		}
	}
	return root;
}
node* binarysearchtree::search(node* root){
	int d;
	cout<<"Enter the element to search..."<<"\n";
	cin>>d;
	node* p=root;
	// node* r=NULL;
	while(p!=NULL){
		// r=p;
		if(p->data==d){
			cout<<"HIT"<<"\n";
		}
		if(d<p->data){
			p=p->left;
		}
		else{
			p=p->right;
		}
	}
	return root;
}
node* binarysearchtree::display(node* root){
	if(root){
		cout<<root->data<<"->";
		display(root->left);
		display(root->right);

	}
	return root;
}
int main(){
	binarysearchtree* bs=new binarysearchtree();
	bs->root=bs->create(bs->root);
	bs->root=bs->insert(bs->root);
	bs->root=bs->insert(bs->root);
	bs->root=bs->insert(bs->root);
	bs->root=bs->insert(bs->root);
	bs->root=bs->insert(bs->root);
	bs->root=bs->insert(bs->root);
	bs->root=bs->search(bs->root);
	bs->root=bs->display(bs->root);
	// cout<<bs->root->left->left->data<<"\n";
	bs->root=bs->search(bs->root);
	
	return 0;
}