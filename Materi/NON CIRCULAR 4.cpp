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
	
	n		= new node;
	n->data = 1;
	n->prev = NULL;
	head	= n;
	tail 	= n;
	
	n			= new node;
	n->data 	= 2;
	n->prev 	= tail;
	tail->next 	= n;
	tail 		= n;
	
	n= new node;
	n->data 	= 3;
	n->prev 	= tail;
	tail->next 	= n;
	tail 		= n;
	
	n			= new node;
	n->data 	= 50;
	n->prev 	= NULL;
	n->next 	= head;
	head ->prev = n;
	head		= n;
	
	node *bantu, *bantu2, *hapus;
	
	n		= new node;
	n->data = 9;
	n->prev = NULL;
	n->next = NULL;
	bantu 	= head;
	
	while (bantu->data != 2)
	{
		bantu= bantu->next;
	}
	
	bantu2 			= bantu->next;
	n->next 		= bantu2;
	bantu2->prev 	= n;
	bantu->next 	= n;
	n->prev 		= bantu;

	hapus		= head;
	head 		= head->next;
	head->prev 	= NULL;
	delete hapus;
	
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
