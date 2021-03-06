#ifndef Z_OUTPUT_H
#define Z_OUTPUT_H
/*
***** ALL RESULTS ARE VERIFIED ******
//---------------------------------------------------------------------
// normal run:
//---------------------------------------------------------------------
: i
: 1
: i
: 2
: i
: 3
: i
: 4
: i
: 5
: s
: 1
: d
: 4
: d
: 5
: d
: 0
------------ RESULTS --------------------
0->|||

0->1->|||

0->1->2->|||

0->1->2->3->|||

0->1->2->3->4->|||

0->1->2->3->4->5->|||

Item Found

0->1->2->3->4->5->|||

0->1->2->3->5->|||

0->1->2->3->|||

1->2->3->|||


//---------------------------------------------------------------------
// InsertHead:
//---------------------------------------------------------------------
for (int i = 0; i < 10; ++i)
{
	InsertHead(head, i);
	PrintList(head);
	cout << endl;
}
------------ RESULTS --------------------
0->|||
1->0->|||
2->1->0->|||
3->2->1->0->|||
4->3->2->1->0->|||
5->4->3->2->1->0->|||
6->5->4->3->2->1->0->|||
7->6->5->4->3->2->1->0->|||
8->7->6->5->4->3->2->1->0->|||
9->8->7->6->5->4->3->2->1->0->|||


//---------------------------------------------------------------------
// InsertAfter:
//---------------------------------------------------------------------
for (int i = 10; i < 20; ++i)
{
	InsertAfter(head, LastNode(head), i);
	PrintList(head);
	cout << endl;
}
------------ RESULTS --------------------
9->8->7->6->5->4->3->2->1->0->10->|||
9->8->7->6->5->4->3->2->1->0->10->11->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->19->|||


//---------------------------------------------------------------------
// InsertBefore:
//---------------------------------------------------------------------
node<int> *mNode = InsertBefore(head, LastNode(head), -1);
PrintList(head);

InsertBefore(head, head, -50);
PrintList(head);

InsertBefore(head, mNode, 700);
PrintList(head);
------------ RESULTS --------------------
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->-1->19->|||
-50->9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->-1->19->|||
-50->9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->700->-1->19->|||


//---------------------------------------------------------------------
// DeleteNode:
//---------------------------------------------------------------------
DeleteNode(head, LastNode(head));
PrintList(head);

DeleteNode(head, head);
PrintList(head);

DeleteNode(head, LastNode(head));
PrintList(head);
------------ RESULTS --------------------
-50->9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->700->-1->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->700->-1->|||
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->700->|||


//---------------------------------------------------------------------
// ClearList:
//---------------------------------------------------------------------
ClearList(head);
------------ RESULTS --------------------
9->8->7->6->5->4->3->2->1->0->10->11->12->13->14->15->16->17->18->700->|||
Empty


//---------------------------------------------------------------------
// InsertSorted:
//---------------------------------------------------------------------
InsertSorted(head, 0);
PrintList(head);

InsertSorted(head, 1);
PrintList(head);

InsertSorted(head, 2);
PrintList(head);

InsertSorted(head, 4);
PrintList(head);

InsertSorted(head, 3);
PrintList(head);

InsertSorted(head, -1);
PrintList(head);
------------ RESULTS --------------------
0->|||
0->1->|||
0->1->2->|||
0->1->2->4->|||
0->1->2->3->4->|||
-1->0->1->2->3->4->|||


//---------------------------------------------------------------------
// SearchList:
//---------------------------------------------------------------------
node<int> *sNode = SearchList(head, -1);

if (sNode) cout << "Found item with value: " << sNode->_item << endl;
else cout << "Did not find item with value: -1" << endl;

sNode = SearchList(head, 3);

if (sNode) cout << "Found item with value: " << sNode->_item << endl;
else cout << "Did not find item with value: 3" << endl;

sNode = SearchList(head, 5);

if (sNode) cout << "Found item with value: " << sNode->_item << endl;
else cout << "Did not find item with value: 5" << endl << endl;
------------ RESULTS --------------------
Found item with value: -1
Found item with value: 3
Did not find item with value: 5


//---------------------------------------------------------------------
// PreviousNode:
//---------------------------------------------------------------------
node<int> *prevNode = PreviousNode(head, sNode);

cout << prevNode->_item << endl << endl;
------------ RESULTS --------------------
4


//---------------------------------------------------------------------
// PreviousNode:
//---------------------------------------------------------------------
for (int i = 0; i < 6; ++i)
{
	cout << At(head, i) << endl;
}
------------ RESULTS --------------------
-1
0
1
2
3
4


//---------------------------------------------------------------------
// PrintList_backwards:
//---------------------------------------------------------------------
PrintList(head);

PrintList_backwards(head, 0);
------------ RESULTS --------------------
-1->0->1->2->3->4->|||
|||<-4<-3<-2<-1<-0<--1


*/
#endif // Z_OUTPUT_H