#include <iostream>
using namespace std;

int top;
void check(char str[], int n, char stack[]) {
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '(')
		{
			top = top + 1;
			stack[top] = '(';
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
	char str2[] = { '(', ')', '(', 'a', '+', 'b' };
	char str3[] = { '(', '(', '(', 'a', '+', 'b' };
	char stack[10];
	/*top = -1;
	check(str, 5, stack);
	top = -1;
	check(str2, 6, stack);*/
	top = -1;
	check(str3, 6, stack);
	return 0;
}