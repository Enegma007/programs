#include<bits/stdc++.h>
// typedef nullptr null;
using namespace std;

class Node{
	public:
		int data;
		Node* link;
		Node(int d){
			this->data=d;
			this->link=NULL;
		}
};
class SingleLinked{
	public:
		Node* root;
		Node* p;
		SingleLinked(){
			this->root=NULL;
			this->p=NULL;

		}
		Node* create(Node*);
		Node* display(Node*);
		Node* insertbegin(Node*);
		Node* insertlast(Node*);
		Node* insertloc(Node*);
		Node* deleten(Node*);
		Node* deletenlast(Node*);
		Node* deletenloc(Node*);
		Node* reverse(Node*);
		// Node* swaploc(Node*);
		int length(Node*);


};
Node* SingleLinked::create(Node* root){
	int d;
	cout<<"enter the data for 1:"<<endl;
	cin>>d;
	Node* temp=new Node(d);
	if(root==NULL){
		root=temp;
	}
	else{
		p=root;
		while(p->link!=NULL){
			p=p->link;

		}
		p->link=temp;
		// root=temp;
	}
	root=display(root);
	return root;
}
Node* SingleLinked::insertbegin(Node* root){
	int d;
	cout<<"enter the data for 2:"<<endl;
	cin>>d;
	Node* temp=new Node(d);
	if(root==NULL){
		root=temp;
	}
	else{
		temp->link=root;
		root=temp;
	}
	root=display(root);
	return root;

	

}

Node* SingleLinked::display(Node* root){
	// p=root;
	if(root==NULL){
		cout<<"List is empty..."<<"\n";
	}
	else{
		p=root;
		while(p!=NULL){
			cout<<p->data<<"->";
			p=p->link;
		}
		cout<<"\n";
	}
	return root;
}
int SingleLinked::length(Node* root){
	int i=0;
	p=root;
	while(p!=NULL){
		i++;
		p=p->link;
	}
	return i;

}
Node* SingleLinked::insertlast(Node* root){
	int d;
	cout<<"enter val to insert at loc"<<endl;
	cin>>d;
	Node* temp=new Node(d);
	p=root;
	while(p->link!=NULL){
		p=p->link;
	}
	p->link=temp;
	return root;

}
Node* SingleLinked::insertloc(Node* root){
	int d,loc;
	cout<<"enter data and loc to insert:"<<endl;
	cin>>d>>loc;
	if(loc<=length(root)){
		Node* temp=new Node(d);
		p=root;
		int i=1;
		while(i<loc-1){
			p=p->link;
			i++;
		}
		temp->link=p->link;
		p->link=temp;




	}
	return root;

}
Node* SingleLinked::deleten(Node* root){
	if(root==NULL){
		cout<<"list is empty..."<<"\n";
	}
	else{
		p=root;
		root=p->link;
		p->link=NULL;
		delete p;
	}
	return root;
}
Node* SingleLinked::deletenlast(Node* root){
	if(root==NULL){
		cout<<"list is empty!!!"<<"\n";
	}
	else{
		Node* q;

		p=root;
		int i=1;
		while(i<length(root)-1){
			p=p->link;
			i++;
		}
		q=p;
		q=p->link;
		p->link=NULL;
		delete q;

	}
	return root;
}
Node* SingleLinked::deletenloc(Node* root){
	int loc,i=1;
	cout<<"enter the location.."<<"\n";
	cin>>loc;
	if(loc<=length(root)){
		Node* q;
		p=root;
		while(i<loc-1){
			p=p->link;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		delete q;
	}
	return root;
}
Node* SingleLinked::reverse(Node* root){
	Node *pre,*cur;
	if(root!=NULL){
		pre=root;
		cur=pre->link;
		root=root->link;
		pre->link=NULL;
		while(root!=NULL){
			root=root->link;
			cur->link=pre;
			pre=cur;
			cur=root;
		}
		root=pre;
	}
	return root;
}


int main(){
	int n;
	SingleLinked* list=new SingleLinked();
	// cin>>n;
	while(1){
		// cin>>n;
		cout<<"1.)Create"<<"\n";
		cout<<"2.)Insert at begin."<<"\n";
		cout<<"3.)Display."<<"\n";
		cout<<"4.)Insert at location."<<"\n";
		cout<<"5.)Delete last node."<<"\n";
		cout<<"6.)Delelte first node."<<"\n";
		cout<<"7.)Delete node at a location."<<"\n";
		cout<<"8.)Swap two nodes."<<"\n";
		cout<<"9.)Reverse the linked list.."<<"\n";
		cout<<"10.)Exit.."<<"\n";
		cin>>n;
		switch(n){
			case 1:
				list->root=list->create(list->root);
				break;
			case 2:
				list->root=list->insertbegin(list->root);
				break;
			case 3:
				list->root=list->display(list->root);
				break;
			case 4:
				list->root=list->insertloc(list->root);
				break;
			case 5:
				list->root=list->deletenlast(list->root);
				break;
			case 6:
				list->root=list->deleten(list->root);
				break;
			case 7:
				list->root=list->deletenloc(list->root);
				break;
			case 9:
				list->root=list->reverse(list->root);
				break;
			case 10:
				exit(0);
				break;



		}


	}
	return 0;


}