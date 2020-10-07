/*
 * Author: Benjamin Mao
 * Project: Stack
 * Purpose: Test functions for Stack.
 *
 * Notes: None.
 */

#include <iostream>

#include "StackTest.h"
#include "Stack.h"

using namespace std;

void StackTest::TestPush()
{
	cout << "Push Test: " << endl;

	Stack<int> testStack;

	for (int i = 0; i < 10; ++i)
	{
		cout << "Stack: " << testStack << endl;
		cout << "Push: " << i << endl;
		testStack.push(i);
	}

	cout << "Stack: " << testStack << endl;

	cout << endl;
}

void StackTest::TestPop()
{
	cout << "Pop Test: " << endl;

	Stack<int> testStack;

	for (int i = 0; i < 10; ++i)
	{
		cout << "Push: " << i << endl;
		testStack.push(i);
	}

	cout << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << "Stack: " << testStack << endl;
		testStack.pop();
		cout << "Pop" << endl;
	}

	cout << "Stack: " << testStack << endl;

	cout << endl;
}

void StackTest::TestTop()
{
	cout << "Top Test: " << endl;

	Stack<int> testStack;

	for (int i = 0; i < 10; ++i)
	{
		cout << "Push: " << i << endl;
		testStack.push(i);
		cout << "Stack: " << testStack << endl;
		cout << "Top: " << testStack.top() << endl;
	}

	cout << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << "Pop" << endl;
		testStack.pop();
		cout << "Stack: " << testStack << endl;

		if (!testStack.empty())
			cout << "Top: " << testStack.top() << endl;
	}

	cout << endl;
}
