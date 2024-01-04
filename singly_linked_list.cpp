#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
	// constructor 	
	Node(int data)
	{
		this->data=data;
		this->next=NULL;
	}
	
	//destructor
	~Node()
	{
		int value = this->data;
		if(this->next != NULL)
		{
			delete next;
			this->next= NULL;
		} 
		cout << "Memory freed for data " << value << endl;
	}
		

};
//inserting the node at head

void InsertAtHead(Node* &head,int data)
{
	Node* temp = new Node(data);
	temp->next=head;
	head = temp;
}

//inserting the node at tail
void insertAtTail(Node* &tail,int data)
{
	Node* temp = new Node(data);
	tail->next = temp;
	tail = temp;
}

//inserting the node at middle
void insertAtMiddle(Node* tail,Node* &head,int position,int data)
{
	//insert at start
	if(position == 1)
	{
		InsertAtHead(head,data);
		return;
	}
	Node* temp = head;
	int count =1;
	while(count<position-1)
	{
		temp=temp->next;
		count++;
	}
	//if adding at the last then how to update the last node
	if( temp->next == NULL ) 
	{
		insertAtTail(tail,data);
		return;
	}
	
	//creating a node 
	Node* node2= new Node(data);
	node2->next=temp->next;
	temp->next= node2;
}
//handling the tail node problem

deleteAtTail(Node* &tail,Node* &current,Node* &prev)
{
	tail=prev;
	prev->next = NULL;
	current->next=NULL;
	delete current;
	
}

//deleting node

void deleteNode(Node* &head,Node* &tail,int position)
{
	//deleting the start node 
	if(position == 1)
	{
		Node*temp=head;
		head = head->next;
		temp->next = NULL;
		//To free the memory
		delete temp;
	}
	else
	{
		//deleting any middle node or last node
		Node* current = head;
		Node* prev =NULL;
		int count = 1;
		while(count < position)
		{
			prev = current;
			current = current->next;
			count++;
		}
		if(current->next == NULL )
		{
			deleteAtTail(tail,current,prev);
			return;
		}
		else
		{
			prev->next = current->next;
			current->next = NULL;
			delete current;	
		}

	}
}

//to display the linked list
void print(Node* &head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout << temp->data << "  ";
		temp=temp->next; 
	}
	cout << endl << endl;
}

int main()
{
	//created a new Node
	Node* node1=new Node(10);
	
	//head pointed to node1 
	Node* head=node1;
	//tail pointed to node1
	Node* tail=node1;	
	
	//printing before
	print(head);
	
	//inserting the node at head 
	InsertAtHead(head,8);

	//printing after 
	print(head);
	
	//inserting the node at tail
	insertAtTail(tail,12);

	
	print(head);
	
	//inserting the node at middle position
	insertAtMiddle(tail,head,4,66);
	print(head);
	
	deleteNode(head,tail,4);
	print(head);
	
	cout << "Head is " << head->data << endl;
	cout << "Tail is " << tail->data << endl;
	return 0;
}
