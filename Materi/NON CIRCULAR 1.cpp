#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

typedef struct node
{
	int data;
	node* prev;
	node* next;
}node;

int main()
{
	node *head;
	node *tail;
	node *n;
	
	n= new node;
	n->data = 1;
	n->prev = NULL;
	head = n;
	tail = n;
	
	n= new node;
	n->data = 2;
	n->prev = tail;
	tail->next = n;
	tail = n;
	
	n= new node;
	n->data = 3;
	n->prev = tail;
	tail->next = n;
	tail = n;
	
	tail->next = NULL;
	
	tail = head;
	
	while(tail!=NULL)
	{
		cout<< "Data : " << tail->data << endl;
		tail = tail->next;
	}
	system("PAUSE");
	return 0;
}
