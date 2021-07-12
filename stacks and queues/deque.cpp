// in stl library these are the functions of a deque
#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int> g)
{
	deque <int> :: iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	deque <int> gquiz;
	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(15);
	cout << "The deque gquiz is : ";
	showdq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.max_size() : " << gquiz.max_size();

	cout << "\ngquiz.at(2) : " << gquiz.at(2);
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop_front() : ";
	gquiz.pop_front();
	showdq(gquiz);

	cout << "\ngquiz.pop_back() : ";
	gquiz.pop_back();
	showdq(gquiz);

	return 0;
}

// deque can be implemented bu=y usinf linked literals


#include <bits/stdc++.h>
using namespace std;

// structure for a node of deque
struct DQueNode {
	int value;
	DQueNode* next;
	DQueNode* prev;
};

// Implementation of deque class
class deque {
private:

	// pointers to head and tail of deque
	DQueNode* head;
	DQueNode* tail;

public:
	// constructor
	deque()
	{
		head = tail = NULL;
	}

	// if list is empty
	bool isEmpty()
	{
		if (head == NULL)
			return true;
		return false;
	}

	// count the number of nodes in list
	int size()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = head;
			int len = 0;
			while (temp != NULL) {
				len++;
				temp = temp->next;
			}
			return len;
		}
		return 0;
	}

	// insert at the first position
	void insert_first(int element)
	{
		// allocating node of DQueNode type
		DQueNode* temp = new DQueNode[sizeof(DQueNode)];
		temp->value = element;

		// if the element is first element
		if (head == NULL) {
			head = tail = temp;
			temp->next = temp->prev = NULL;
		}
		else {
			head->prev = temp;
			temp->next = head;
			temp->prev = NULL;
			head = temp;
		}
	}

	// insert at last position of deque
	void insert_last(int element)
	{
		// allocating node of DQueNode type
		DQueNode* temp = new DQueNode[sizeof(DQueNode)];
		temp->value = element;

		// if element is the first element
		if (head == NULL) {
			head = tail = temp;
			temp->next = temp->prev = NULL;
		}
		else {
			tail->next = temp;
			temp->next = NULL;
			temp->prev = tail;
			tail = temp;
		}
	}

	// remove element at the first position
	void remove_first()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = head;
			head = head->next;
			head->prev = NULL;
			free(temp);
			return;
		}
		cout << "List is Empty" << endl;
	}

	// remove element at the last position
	void remove_last()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = tail;
			tail = tail->prev;
			tail->next = NULL;
			free(temp);
			return;
		}
		cout << "List is Empty" << endl;
	}

	// displays the elements in deque
	void display()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = head;
			while (temp != NULL) {
				cout << temp->value << " ";
				temp = temp->next;
			}
			cout << endl;
			return;
		}
		cout << "List is Empty" << endl;
	}
};
// and to implement stacks adn queues we can use direct stl library and then modify the push and pop operations seperately  for queue and stacks
// Class to implement stack using Deque
class Stack : public deque {
public:
	// push to push element at top of stack
	// using insert at last function of deque
	void push(int element)
	{
		insert_last(element);
	}

	// pop to remove element at top of stack
	// using remove at last function of deque
	void pop()
	{
		remove_last();
	}
};

// class to implement queue using deque
class Queue : public deque {
public:
	// enqueue to insert element at last
	// using insert at last function of deque
	void enqueue(int element)
	{
		insert_last(element);
	}

	// dequeue to remove element from first
	// using remove at first function of deque
	void dequeue()
	{
		remove_first();
	}
};

// Driver Code
int main()
{
	// object of Stack
	Stack stk;

	// push 7 and 8 at top of stack
	stk.push(7);
	stk.push(8);
	cout << "Stack: ";
	stk.display();

	// pop an element
	stk.pop();
	cout << "Stack: ";
	stk.display();

	// object of Queue
	Queue que;

	// insert 12 and 13 in queue
	que.enqueue(12);
	que.enqueue(13);
	cout << "Queue: ";
	que.display();

	// delete an element from queue
	que.dequeue();
	cout << "Queue: ";
	que.display();

	cout << "Size of Stack is " << stk.size() << endl;
	cout << "Size of Queue is " << que.size() << endl;
	return 0;
}
