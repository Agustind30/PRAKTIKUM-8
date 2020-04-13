#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
//linked list circular
typedef struct node
{
	int data;
	node* prev;
	node* next;
}node;

int main()
{
	node* head;
	node* tail;
	node* n;
	node* bantu;
	
	n= new node;
	n->next = n;
	n->prev = n;
	n->data = 5;
	
	head=tail=n;
	
	n= new node;
	n->next = n;
	n->prev = n;
	n->data = 8;
	
	tail->next = n;
	n->prev = tail;
	tail = n;
	
	tail->next = head;
	head->prev = tail;
	
	n= new node;
	n->next = n;
	n->prev = n;
	n->data = 9;
	
	tail->next = n;
	n->prev = tail;
	tail = n;
	
	tail->next = head;
	head->prev = tail;
	
	bantu=head;
	do
	{
		cout<<bantu->data;
		bantu = bantu->next;
	} while (bantu!=head);
	
	system ("PAUSE");
	return 0;
}
