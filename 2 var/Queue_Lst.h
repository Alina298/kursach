#include "iostream."
#include "conio.h"
class Queue
{
 struct node
 {
  int value;
  node* next;
 };


 node* head;
 int count;
	  public:
 Queue();
 ~Queue();
 void Push(int value); // Добавление в очередь
 int Pop(); //  извлечение из очереди
 int is_Empty(); // проверка пуст ли список
 void clear();
};
Queue::Queue()
{
 head=0;
 count=0;
}
Queue::~Queue()
{
 clear();
 /*
 node *cur=NULL;
 node *temp=top;
 while(temp)
 {
  cur=temp;
  temp=temp->next;
  delete cur;
 } */
}
void Queue::Push(int value)
{
  node * elem=0;
  elem=new node;
 elem->value=value;
 elem->next=0;
 if(head==0)
 {
  head=elem;
 }
 else
 {
  elem->next=head;
  head=elem;
  }

}
int Queue::Pop()
{
 node*cur=head;
 int val;
 if (!head) return INT_MIN;
 val=cur->value;
 head=head->next;
 delete cur;
 return val;
}
int Queue::is_Empty()
{
 if (head) return 1;
 else return 0;
}
void Queue::clear()
{
 node* cur=head;
 while(cur)
 {
  head=head->next;
  delete cur;
  cur=head;
 }
}



