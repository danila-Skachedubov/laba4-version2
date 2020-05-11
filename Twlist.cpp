#include <iostream>
#include"TWList.h"
using namespace std;
template<typename T>
twlist<T>::twlist():head(NULL), tail(NULL){counter=0;}
template<typename T>
twlist<T>::~twlist()
{
    while(head!=NULL)
    {
    tail=head->next;
    delete head;
    head=tail;
    counter=0;
    }
}
template<typename T>
void twlist<T>::insertFirst(T x)
{
    node<T> *temp=new node<T>;
    temp->prev = 0;
    temp->name=x;
    temp->next = head;
    if(head!=NULL)
    {
      head->prev=temp;
    }
    if(counter == 0)
    {
        head = tail = temp;
    }
   else
   {
        head = temp;
   }
counter++;
}
template<typename T>
void twlist<T>::insertLast(T x)
{
    node<T>*temp = new node<T>;
    temp->next = 0;
    temp->name = x;
    temp->prev = tail;
   if(tail != 0)
   {
      tail->next = temp;
   }
   if(counter == 0)
    {
      head = tail = temp;
    }
   else
   {
       tail = temp;
   }
counter++;
 }
template<typename T>
bool twlist<T>::insertAtPos(T y)
{
    int pos;
    cin >> pos;
if(pos < 1 || pos > Size())
   {
      return false;
   }
   if(pos == counter + 1)
   {
      insertLast(y);
      return true;
   }
   else if(pos == 1)
   {
     insertFirst(y);
      return true;
   }
   int i = 1;
   node<T> * Ins = head;
   while(i < pos)
   {
      Ins = Ins->next;
      i++;
   }
   node<T> * PrevIns = Ins->prev;
   node<T> * temp = new node<T>;
   temp->name=y;
if(PrevIns != 0 && counter!= 1)
    {
    PrevIns->next = temp;
    temp->next = Ins;
    temp->prev = PrevIns;
    Ins->prev = temp;
    return true;
    }
counter++;
return true;
}
template<typename T>
void twlist<T>::deleteAtPos(int pos)
{
    node<T> *temp=head;
    node<T> *help;
    if(temp!=NULL && pos<=counter)
        {
        for(int i=0; i!=pos; i++)
        {
            help=temp;
            temp=temp->next;
        }
        if(temp==head)
            {
            head=temp->next;
            }
        else
            {
            help->next=temp->next;
            }
        delete temp;
        }
counter--;
}
template<typename T>
int twlist<T>::Size()
{
   return counter;
}
template<typename T>
void twlist<T>::deleteLast()
{
 if(tail)
 {
    node<T> * cur=tail;
    tail=tail->prev;
    if(tail)
    tail->next=NULL;
    delete cur;
 }
 if (!tail)
return;
counter--;
    }

template<typename T>
void twlist<T>::deletefirst()

{
    if ( head )
    {
        node<T> * cur = head;
        head = head->next;
        if (head) head->prev = NULL;
        delete cur;
    }
    if (!head)
    {
return;
    }
counter--;
}

template<typename T>
void twlist<T>::Print()
{
   if(counter != 0)
   {
      node<T> * temp = head;
      cout << "( ";
      while(temp->next != 0)
      {
          cout << temp->name << ", ";
          temp = temp->next;
      }

      cout << temp->name << " )\n";
   }
}
template<typename T>
void twlist<T>::Delete(T x)
{
node<T> *temp=head,*help;
    while(temp!=NULL && temp->name!=x)
        {
        help=temp;
        temp=temp->next;
        }
    if(temp==head)
        {
        head=temp->next;
        }
    else
        {
        help->next=temp->next;
        }
    delete temp;
counter--;
    }
template<typename T>
void twlist<T>::Clear()
    {
        {
    while(counter!=0)
    deleteAtPos(0);
        }
    }
template<typename T>
bool twlist<T>::isContains(int DataItem)
{
  node<T> *ptr;
  ptr = head;
  while (ptr != NULL)
    {
    if (DataItem == ptr->name)
    {
    return true;
    }
    else
    ptr = ptr->next;
    }
  return false;

}
template<typename T>
bool twlist<T>::isEmpty()
     {
    if(head==NULL)
    {
        return true;
    }
    else return false;
     }
template<typename T>
int twlist<T>::getfirst()
{
    if(head!=NULL)
    {
       return head->name;
    }
}
template<typename T>
int twlist<T>::getlast()
{
    if(tail!=NULL)
    {
       return tail->name;
    }
}

