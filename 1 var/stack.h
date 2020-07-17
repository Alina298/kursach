
#define STACK_H
#include "iostream"
#include "conio.h"
class Stack
{
 struct list
 {
  int value;
  list* next;
 };
 list* top;
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
 list *cur=NULL;
 list *temp=top;
 while(temp)
 {
  cur=temp;
  temp=temp->next;
  delete cur;
 } */
}
void Stack::push(int value)
{
 list* nel=new list;
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
 list*cur=top;
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
 list* cur=top;
 while(cur)
 {
  top=top->next;
  delete cur;
  cur=top;
 }
}
