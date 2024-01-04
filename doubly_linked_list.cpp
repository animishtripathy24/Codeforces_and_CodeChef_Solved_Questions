#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		Node* prev;
		int data;
		Node* next;
		
	//constructor 
	Node(int data)
	{
		this->data=data;
		this->prev=NULL;
		this->next=NULL;
	}
	
	//destructor
	~Node()
	{
		int value = this->data;
		if(this->next != NULL)
		{
			delete next;
			this->next = NULL;
		}
		cout << "Memory freed for data " << value << endl;
	}
};

//inserting the node at head
void insertAtHead(Node* &head,Node* &tail,int data)
{
	//agar list empty hai toh usko alag se handle karna padega....
	if(head == NULL )
	{
		Node* temp = new Node(data);
		head = temp;
		tail = temp;
	}
	else 
	{
		//creating a new node 
		Node* temp = new Node(data);
		
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
}

//inserting the node at tail
void insertAtTail(Node* &tail,Node* &head,int data)
{
	//agar tail hi null hai tab kya karenge 
	if(tail == NULL )
	{
		Node* temp = new Node(data);
		tail = temp;	
		head = temp;	
	}
	else 
	{
		//creating a new Node 
		Node* temp = new Node(data);
		
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}

}

//inserting the node at middle position 
void insertAtMiddle(Node* &head,Node* &tail,int position ,int data)
{
	//if to be inserted at start
	if(position == 1)
	{
		insertAtHead(head,tail,data);
		return;
	}
	
	
	Node* temp = head;
	int count = 1;
	while( count < position-1 )
	{
		temp=temp->next;
		count++;
	}
	
	//if adding at the last then how to update the last node
	if( temp->next == NULL ) 
	{
		insertAtTail(tail,head,data);
		return;
	}
	
	//creating a new Node 
	Node* newNode = new Node(data);
	newNode->next = temp->next;
	temp->next = newNode;
	newNode->prev = temp;  
	
}


//handling the tail node problem

deleteAtTail(Node* &tail,Node* &current,Node* &prev)
{
	tail=current->prev;
	prev->next = NULL;
	current->prev=NULL;
	delete current;
	
}


//deleting the node from the DLL
void DeleteNode(Node* &head,Node* &tail,int position)
{
	//if it the starting node
	if(position == 1)
	{
		Node*temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	
	//if it last node or any middle node 
	Node* current = head;
	Node* previous = NULL;
	int count =1;
	while(count < position)
	{
		previous= current;
		current=current->next;
		count++;
	}
	if(current->next == NULL )
	{
		deleteAtTail(tail,current,previous);
		return;
	}
	else
	{
		current->prev= NULL;
		previous->next = current->next;
		current->next = NULL;
		delete current;
	}
}


//traversing through the doubly linked list
void print(Node* &head)
{
	Node* temp = head;

	while(temp != NULL )
	{
		cout << temp->data << "  ";
		temp=temp->next;
    } 
 	cout << endl << endl;
	
}


int main()
{
	//creating a new Node 
	Node* node1 = new Node(10);
	
	//pointing the head pointer to the start node 
	Node* head = node1;
	
	//pointing the tail pointer to the start node 
	Node* tail = node1;
	
	//displaying the doubly linked list
	print(head);
	
	//adding node at the beginning 
	insertAtHead(head,tail,8);
	
	print(head);
	
	//adding the node at the end 
	insertAtTail(tail,head,12);
	
	print(head);
	
	//adding the node at middle 
	insertAtMiddle(head,tail,4,56);
	
	print(head);
	
	DeleteNode(head,tail,4);
	print(head);
	
	cout << "Head in the list is " << head->data << endl;
	cout << "Tail in the list is " << tail->data << endl;
	
	
	return 0;
}
