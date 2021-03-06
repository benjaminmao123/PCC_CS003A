/*
 * Author: Benjamin Mao
 * Project: Queue
 * Purpose: Entry point for Queue class.
 *
 * Notes: None.
 */

#include <iostream>

#include "QueueTest.h"
#include "StackTest.h"

using namespace std;

void Test();

int main()
{
	Test();

	return 0;
}

void Test()
{
	StackTest::TestPush();
	StackTest::TestPop();
	StackTest::TestTop();
	QueueTest::PushTest();
	QueueTest::PopTest();
	QueueTest::FrontTest();
}
