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
class queue{
	public:
		node* front;
		node* rear;
		// queue* q;
		queue(){
			this->front=NULL;
			this->rear=NULL;
		}
		queue* enque(queue*);
		queue* deque(queue*);
		queue* display(queue*);
};
// class quee{
// 	public:
// 		queue* q;
// };
queue* queue::enque(queue* q){
	int d;
	cout<<"Enter the data to enque..."<<"\n";
	cin>>d;
	node* temp=new node(d);
	queue* q=new queue();
	if(q->front==NULL){
		q->front=q->rear=temp;
	}
	else{
		q->rear->link=temp;
		q->rear=temp;
	}
	return q;
}
queue* queue::deque(queue* q){
	queue* q=new queue();
	if(q->front==NULL){
		cout<<"Queue is empty..."<<"\n";
	}
	else{
		node* o;
		p=q->front;
		q->front=q->front->link;
		p->link=NULL;
		delete p;
	}
	return q;
}
queue* queue::display(queue* q){
	queue* q=new queue(;
	if(q->front==NULL){
		cout<<"queue is empty..."<<"\n";

	}
	else{
		node* p;
		p=q->front;
		while(p!=q->rear){
			cout<<p->data<<"->";
			p=p->link;
		}
		cout<<p->data<<"\n";
	}
	return q;
}
int main(){
	int n;
	queue* q=new queue();
	while(1){
		cout<<"1.Enque"<<"\n"<<"2.Deque"<<"\n"<<"3.Display"<<"\n"<<"4.Exit"<<"\n";
		cin>>n;
		switch(n){
			case 1:
				q=q->enque(q);
				break;
			case 2:
				q=q->deque(q);
				break;
			case 3:
				q=q->display(q);
				break;
			case 4:
				exit(0);
		}
	}
	return 0;

}