#include <iostream>
#define SIZE 10
using namespace std;

class Stack
{
    int data[SIZE];
    int top;
    
    public:
      Stack()
      {
          top=-1;
      }
      void push(int element)
      {
         if(isFull()==1)
           cout<<"Stack is Full.....!!";
         else
           data[++top]=element; 
      }
      
      int pop()
      {
          if(isEmpty()==1)
            return 1;
          else
            return data[top++];
      }
      
      int isEmpty()
      {
          if(top==-1)
          {
              return 1;
          }
          else
          {
              return 0;
          }
      }
      
      int isFull()
      {
          if(top==SIZE-1)
             return 1;
          else
             return 0;
      }
      
      int peek()
      {
          if(isEmpty()==1)
            return -1;
          else
            return data[top];
      }
};

int main()
{
    cout<<"Static implementation of Stack......!!!";
    Stack sk;
    sk.push(10);
    sk.push(20);
    cout<<"\nStack is Empty?"<<sk.isEmpty();
    cout<<"\nStack is Full?"<<sk.isFull();
    cout<<"\nElement is at a top position:"<<sk.peek();
    cout<<"\nElement removed from stack:"<<sk.pop();
    cout<<"\nElement removed from stack:"<<sk.pop();
    cout<<"\nElement removed from stack:"<<sk.pop();
    return 0;
}