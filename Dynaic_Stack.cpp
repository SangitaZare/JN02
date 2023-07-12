#include <iostream>
using namespace std;

class Stack
{
private:
    struct Node 
	{
        int data;
        Node* next;
    };

    Node* top;

public:
    Stack()
	{
        top = nullptr;
    }

    ~Stack() 
	{
        while (!isEmpty())
		{
            pop();
        }
    }

    bool isEmpty() 
	{
        return top == nullptr;
    }

    void push(int item) 
	{
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }

    int pop()
	{
        if (isEmpty()) 
		{
            cerr << "Stack is empty!" << endl;
            return -1;
        }

        Node* temp = top;
        int poppedValue = temp->data;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    int peek()
	{
        if (isEmpty())
		{
            cerr << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }
};

int main()
 {
    Stack stack;

    int numItems;
    cout << "Enter the number of items to push onto the stack: ";
    cin >> numItems;

    int item;
    for (int i = 0; i < numItems; i++)
	{
        cout << "Enter item " << i + 1 << ": ";
        cin >> item;
        stack.push(item);
    }

    cout << endl;

    cout << "Popping items from the stack:" << endl;
    while (!stack.isEmpty())
	{
        cout << stack.pop() << endl;
    }

    return 0;
}