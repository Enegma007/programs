#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *llink,*rlink;
		Node(int d){
			this->data=d;
			this->llink=NULL;
			this->rlink=NULL;
		}

};
class dlinklist{
	public:
		node* root;
		dlinklist(){
			this->root=NULL;
		}
		node* create(node* root);
		node* display(node* root);
		node* insertb(node* root);
		node* insertl(node* root);
};
node* dlinklist::create(node* root){
	int d;
	cout<<"enter the data to create a node..."<<"\n";
	cin>>d;
	node* temp=new node(d);
	root=temp;
	return root;

}
node* dlinklist::display(node* root){
	if(root==NULL){
		cout<<"the list is empty."<<"\n";
	}
	else{
		node* p=root;
		while(p!=NULL){
			cout<<p->data<<"<->";
			p=p->rlink;
		}
		cout<<"\n";

	}
	return root;
}
node* dlinklist::insertb(node* root){
	if(root==NULL){
		cout<<"the list is empty."<<"\n";
	}
	else{
		int d;
		cout<<"enter the data to insert the node at beginning..."<<"\n";
		cin>>d;
		
	}
}
