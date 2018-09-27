
#include <iostream>
#include <string>
#include "Stacks.h"
#include "Queues.h"
using namespace std;

void isPalindrome();

int main()
{
	isPalindrome();
	return 0;
}

// this function determines whether a string is a palindrome
void isPalindrome()
{
	string palindrome;
		char charS, charQ;
		unsigned int n = 0;
		bool valid = true;

		Stacks stack;
		Queues queue;

		stack.create();
		queue.create();

	cout << "Enter a string: ";
	getline(cin, palindrome);
	cout << "You entered the following: " << palindrome << endl;

	// this loop pushes and inserts the string into the stack and queue
	while(!stack.full() && !queue.full() && (n < palindrome.length()))
	{
		stack.push(palindrome[n]);
		queue.insert(palindrome[n]);
		n++;
	}

	// this loop pops and removes each character from the stack and queue to compare
	while(!stack.empty() && !queue.empty())
	{
		stack.pop(charS);
		cout << "charS = " << charS << endl;
		queue.remove(charQ);
	cout << "charQ = " << charQ << endl;

		if (charS != charQ)
			valid = false;
	}

	if (valid)
		cout << palindrome << " is a palindrome.";
	else
		cout << palindrome << " is not a palindrome.";

	stack.destroy();
	queue.destroy();

} //end palindrome
