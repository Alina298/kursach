#include "iostream."
#include "conio.h"
class Stack
{
 struct node
 {
  int value;
  node* next;
 };


 node* top;
 int count;
	  public:
 Stack();
 ~Stack();
 void push(int value); // Добавление в стэк
 int pop(); // Извлечение из стэка
 int is_Empty(); // проверка пуст ли список
 void clear();
};
Stack::Stack()
{
 top=0;
 count=0;
}
Stack::~Stack()
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
void Stack::push(int value)
{
 node* nel=new node;
 nel->value=value;
 if(!top)
 {
  top=nel;
  top->next=0;
 }
 else
 {
  nel->next=top;
  top=nel;
 }
}
int Stack::pop()
{
 node*cur=top;
 int val;
 if (!top) return INT_MIN;
 val=cur->value;
 top=top->next;
 delete cur;
 return val;
}
int Stack::is_Empty()
{
 if (top) return 1;
 else return 0;
}
void Stack::clear()
{
 node* cur=top;
 while(cur)
 {
  top=top->next;
  delete cur;
  cur=top;
 }
}



