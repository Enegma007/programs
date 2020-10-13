#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* link;
		node(int d){
			this->data=d;
			this->link=NULL;
		}
};
class Stack{
	public:
		node* top;
		stack(){
			this->top=NULL;
		}
		node* pop(node*);
		node* push(node*);
		node* display(node*);
};
node* Stack::pop(node*){
	if(top==NULL){
		cout<<"Stack is empty..."<<"\n";

	}
	else{
		node* p=top;
		top=top->link;
		p->link=NULL;
		delete p;
	}
	return top;
}
node* Stack::push(node*){
	int d;
	cout<<"Enter the data to push...."<<"\n";
	cin>>d;
	node* temp=new node(d);
	if(top==NULL){
		top=temp;
	}
	else{
		temp->link=top;
		top=temp;
	}
	return top;
}
node* Stack::display(node*){
	node* p;
	p=top;
	if(p==NULL){
		cout<<"Underflow"<<"\n";
	}
	else{
		while(p!=NULL){
			cout<<p->data<<"\n"<<"|"<<"\n";
			p=p->link;
		}
	}
	return top;
}
int main(){
	int n;
	Stack *s=new Stack();
	while(1){
		cout<<"1.)Push"<<"\n"<<"2.)Pop"<<"\n"<<"3.Display"<<"\n"<<"4.Exit.."<<"\n";
		cin>>n;
		switch(n){
			case 1:
				s->top=s->push(s->top);
				break;
			case 2:
				s->top=s->pop(s->top);
				break;
			case 3:
				s->top=s->display(s->top);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
}