#include <iostream>
using namespace std;

int top = -1;
void check(char str[], int n, char stack[]) {
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '(')
		{
			top = top + 1;
		} 
		if (str[i] == ')') {
			if (top == -1)
			{
				top = top - 1;
				break;
			}
			else {
				top = top - 1;
			}
		} 
	}
	if (top == -1) 
	{
		cout << "String is balanced" << endl;
	}
	else {
		cout << "String is unbalanced" << endl;
	}
}

int main() {
	char str[] = { '(', 'a', '+', 'b', ')' };
	char stack[10];
	check(str, 5, stack);
	return 0;
}