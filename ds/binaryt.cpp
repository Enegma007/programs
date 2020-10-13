#include<bits.stdc++/h>
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
class binarytrees{
	public:
		node* root;
		binarytrees(){
			this->root=NULL;
		}
		node* create(node*);
		node* insert(node*);
		node* search(node*);
		node* display(node*);
		// node* deleten(node*);
};
node* binarytrees::create(node* root){
	int d;
	cout<<"enetr the data for the root element...."<<"\n";
	cin>>d;
	node* temp=new node(d);
	if(!root){
		root=temp;
	}
	return root;
}
node* binarytrees::insert(node* root){
	int d;
	cout<<"enter the data to insert...."<<"\n";
	cin>>d;
	node* temp=new node(d);
	queue<node*> q;
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
node* binarytrees::search(node* root){
	int d;
	cout<<"enter the data to search...."<<"\n";
	cin>>d;
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* p=q.front();
		q.pop();
		if(p->data==d){
			cout<<"Hit..."<<"\t"<<p->data<<"->"<<root<<"\n";
		}
		if(p->left){
			q.push(p->left);
		}
		if(p->right){
			q.push(p->right);
		}
	}
	return root;
}
node* binarytrees::display(node* root){
	if(!root){
		cout<<"the tree is empty..."<<"\n";
	}
	else{
		cout<<p->data<<"->"<<"\n";
		display(root->left);
		display(root->right);
	}
	return root;
}