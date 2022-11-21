#include<bits/stdc++.h>
using namespace std;
//#define temp
//Node
class node
{
public:
	int data;
	node * next;

	node(int val){
		data=val;
		next=NULL;
	}
	
};
//Insert at Head 
void insertAtHead(node* head,int val){
	node* n=new node(val);
	n->next=head;
	head=n;
}
//Insert at Tail
void insertAtTail(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
//insertAdd
void insertAdd(node * & head,int val){
	node *n=new node(val);
	n->next=head;
	head=n;
}
//display the element
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
//Search 
bool search(node* head,int key){
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
//Delete At Middle
void DeleteAtMiddle(node* head,int key){
	node* temp;
	node*prev;
	temp =head;
	prev=head;
	//head=head->next;
	for(int i=0;i<key;i++){
		if(i==0 && key ==1){
			head=(head)->next;
			free(temp);
		}
		
		else{
			if(i==key-1 && temp){
				prev->next=temp->next;
				free(temp);
			}
			else{
				prev=temp;
				if(prev==NULL)
					break;
				temp = temp->next;
			}
		}
	}
}
//Delete From Front
void DeleteAtFront(node* head,int key){
	node *temp=head;
	node *prev=NULL;
	if(temp!=NULL && temp->data==key){
		*head=*temp ->next;
		delete temp;
		return;
	}
	else{
		while(temp !=NULL && temp->data !=key){
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL){
			return;
			prev->next=temp->next;
			delete temp;
		}
	}
}

//Deletion
void deletion(node* &head,int val){
	node* temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* todelete=temp->next;

	temp->next=temp->next->next;
	delete todelete;
}
int main(){
	node* head=NULL;
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,11);
	insertAtTail(head,6);
	insertAtTail(head,3);
	insertAtTail(head,19);
	display(head);
	DeleteAtMiddle(head,6);
	display(head);
	DeleteAtFront(head,1);
	display(head);
	insertAtHead(head,9);
	display(head);
	cout<<search(head,4)<<"\n";
	deletion(head,5);
	display(head);


}