#include<bits/stdc++.h>
using namespace std;

class kStacks
{
	int *arr; 
	int *top; 
	int *next;
			
	int n, k;
	int free; 
public:
	//constructor to create k stacks in an array of size n
	kStacks(int k, int n);

	
	

	
	void push(int item, int sn);

	
	int pop(int sn);

	
	
};


kStacks::kStacks(int k1, int n1)
{
	
	k = k1, n = n1;
	arr = new int[n];
	top = new int[k];
	next = new int[n];

	
	for (int i = 0; i < k; i++)
		top[i] = -1;

	
	free = 0;
	for (int i=0; i<n-1; i++)
		next[i] = i+1;
	next[n-1] = -1; // -1 is used to indicate end of free list
}


void kStacks::push(int item, int sn)
{
	// Overflow check
	if (free==-1)
	{
		cout << "\nStack Overflow\n";
		return;
	}

	int i = free;	 // Store index of first free slot

	// Update index of free slot to index of next slot in free list
	free = next[i];

	// Update next of top and then top for stack number 'sn'
	next[i] = top[sn];
	top[sn] = i;

	// Put the item in array
	arr[i] = item;
}


int kStacks::pop(int sn)
{
	// Underflow check
	if (top[sn]==-1)
	{
		cout << "\nStack Underflow\n";
		return INT_MAX;
	}


	// Find index of top item in stack number 'sn'
	int i = top[sn];

	top[sn] = next[i]; // Change top to store next of previous top

	// Attach the previous top to the beginning of free list
	next[i] = free;
	free = i;

	// Return the previous top item
	return arr[i];
}


int main()
{
	// Let us create 3 stacks in an array of size 10
	int k = 3, n = 10;
	kStacks ks(k, n);

	// Let us put some items in stack number 2
	ks.push(15, 2);
	ks.push(45, 2);

	// Let us put some items in stack number 1
	ks.push(17, 1);
	ks.push(49, 1);
	ks.push(39, 1);

	// Let us put some items in stack number 0
	ks.push(11, 0);
	ks.push(9, 0);
	ks.push(7, 0);

	cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
	cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
	cout << "Popped element from stack 0 is " << ks.pop(0) << endl;

	return 0;
}
