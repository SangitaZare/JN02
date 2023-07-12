#include <iostream>
using namespace std;

class Queue
{
private:
    struct Node
	{
        int data;
        Node* next;
    };

    Node* front;
    Node* rear;

public:
    Queue() 
	{
        front = nullptr;
        rear = nullptr;
    }

    ~Queue()
	{
        while (!isEmpty())
		{
            dequeue();
        }
    }

    bool isEmpty() 
	{
        return front == nullptr;
    }

    void enqueue(int item)
	{
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = nullptr;

        if (isEmpty())
		{
            front = rear = newNode;
        }
		else
		{
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty())
		{
            cerr << "Queue is empty!" << endl;
            return -1;
        }

        Node* temp = front;
        int dequeuedValue = temp->data;
        front = front->next;

        if (front == nullptr)
		{
            rear = nullptr;
        }

        delete temp;
        return dequeuedValue;
    }

    int peek() 
	{
        if (isEmpty()) 
		{
            cerr << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }
};

int main() 
{
    Queue queue;

    int numItems;
    cout << "Enter the number of items to enqueue: ";
    cin >> numItems;

    int item;
    for (int i = 0; i < numItems; i++)
	{
        cout << "Enter item " << i + 1 << ": ";
        cin >> item;
        queue.enqueue(item);
    }

    cout << endl;

    cout << "Dequeueing items from the queue:" << endl;
    while (!queue.isEmpty())
	{
        cout << queue.dequeue() << endl;
    }

    return 0;
}
