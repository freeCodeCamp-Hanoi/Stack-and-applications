#include <iostream>
using namespace std;

int top = -1; // index of stack's top element
void push(int stack[], int x, int n) {
	if (top == n - 1)
	{
		cout << "Stack is full" << endl;
	}
	else {
		top = top + 1;
		stack[top] = x;
	}
}

bool isEmpty() {
	if (top == -1)
	{
		return true;
	}
	else {
		return false;
	}
}

void pop() {
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
	}
	else {
		top = top - 1;
	}
}

int size() {
	return top + 1;
}

int topElement(int stack[]) {
	return stack[top];
}

int main() {
	int stack[10];
	push(stack, 5, 10);
	cout << "Size of stack is: " << size() << endl;
	cout << topElement(stack) << endl;
	push(stack, 10, 10);
	cout << size() << endl;
	cout << topElement(stack) << endl;
	pop();
	cout << size() << endl;
	return 0;
}