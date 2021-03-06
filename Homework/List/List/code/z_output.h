#ifndef Z_OUTPUT_H
#define Z_OUTPUT_H
/*
***** ALL RESULTS ARE VERIFIED ******
//---------------------------------------------------------------------
// InsertAfter:
//---------------------------------------------------------------------
: a
: 100
: a
: 200
: a
: 300
: a
: 400
: a
: 500
------------ RESULTS --------------------
{189}->[313]->[691]->[782]->[984]->|||

[189]->{100}->[313]->[691]->[782]->[984]->|||
[189]->[100]->{200}->[313]->[691]->[782]->[984]->|||
[189]->[100]->[200]->{300}->[313]->[691]->[782]->[984]->|||
[189]->[100]->[200]->[300]->{400}->[313]->[691]->[782]->[984]->|||
[189]->[100]->[200]->[300]->[400]->{500}->[313]->[691]->[782]->[984]->|||


//---------------------------------------------------------------------
// InsertBefore:
//---------------------------------------------------------------------
: b
: 100
: b
: 200
: b
: 300
: b
: 400
: b
: 500
------------ RESULTS --------------------
{2}->[296]->[350]->[915]->[951]->|||

{100}->[2]->[296]->[350]->[915]->[951]->|||
{200}->[100]->[2]->[296]->[350]->[915]->[951]->|||
{300}->[200]->[100]->[2]->[296]->[350]->[915]->[951]->|||
{400}->[300]->[200]->[100]->[2]->[296]->[350]->[915]->[951]->|||
{500}->[400]->[300]->[200]->[100]->[2]->[296]->[350]->[915]->[951]->|||


//---------------------------------------------------------------------
// Delete:
//---------------------------------------------------------------------
: d
: n
: d
: d
: d
------------ RESULTS --------------------
{500}->[545]->[762]->[776]->[866]->|||

{545}->[762]->[776]->[866]->|||
[545]->{762}->[776]->[866]->|||
{545}->[776]->[866]->|||
{776}->[866]->|||
{866}->|||


//---------------------------------------------------------------------
// Random:
//---------------------------------------------------------------------
: r
: r
: r
: r
: r
------------ RESULTS --------------------
{116}->[238]->[476]->[763]->[996]->|||

[116]->{96}->[238]->[476]->[763]->[996]->|||
[116]->[96]->{79}->[238]->[476]->[763]->[996]->|||
[116]->[96]->[79]->{457}->[238]->[476]->[763]->[996]->|||
[116]->[96]->[79]->[457]->{314}->[238]->[476]->[763]->[996]->|||
[116]->[96]->[79]->[457]->[314]->{869}->[238]->[476]->[763]->[996]->|||


//---------------------------------------------------------------------
// Search:
//---------------------------------------------------------------------
: s
: 291
: s
: 504
: s
: 207
: s
: 745
: s
: 507
------------ RESULTS --------------------
{207}->[291]->[504]->[507]->[745]->|||

[207]->{291}->[504]->[507]->[745]->|||
[207]->[291]->{504}->[507]->[745]->|||
{207}->[291]->[504]->[507]->[745]->|||
[207]->[291]->[504]->[507]->{745}->|||
[207]->[291]->[504]->{507}->[745]->|||


//---------------------------------------------------------------------
// Next:
//---------------------------------------------------------------------
: n
: n
: n
: n
: n
------------ RESULTS --------------------
{64}->[77]->[421]->[548]->[583]->|||

[64]->{77}->[421]->[548]->[583]->|||
[64]->[77]->{421}->[548]->[583]->|||
[64]->[77]->[421]->{548}->[583]->|||
[64]->[77]->[421]->[548]->{583}->|||
[64]->[77]->[421]->[548]->{583}->|||


//---------------------------------------------------------------------
// Previous:
//---------------------------------------------------------------------
: n
: n
: n
: n
: p
: p
: p
: p
: p
------------ RESULTS --------------------
{85}->[646]->[685]->[815]->[900]->|||

[85]->{646}->[685]->[815]->[900]->|||
[85]->[646]->{685}->[815]->[900]->|||
[85]->[646]->[685]->{815}->[900]->|||
[85]->[646]->[685]->[815]->{900}->|||

[85]->[646]->[685]->{815}->[900]->|||
[85]->[646]->{685}->[815]->[900]->|||
[85]->{646}->[685]->[815]->[900]->|||
{85}->[646]->[685]->[815]->[900]->|||
{85}->[646]->[685]->[815]->[900]->|||


//---------------------------------------------------------------------
// Home:
//---------------------------------------------------------------------
: n
: h
------------ RESULTS --------------------
{232}->[319]->[488]->[760]->[976]->|||

[232]->{319}->[488]->[760]->[976]->|||
{232}->[319]->[488]->[760]->[976]->|||

//---------------------------------------------------------------------
// End:
//---------------------------------------------------------------------
: e
------------ RESULTS --------------------
{309}->[469]->[656]->[806]->[889]->|||

[309]->[469]->[656]->[806]->{889}->|||


//---------------------------------------------------------------------
// InsertSorted:
//---------------------------------------------------------------------
for (int i = 0; i < 10; ++i)
{
	list.InsertSorted(i);
	cout << list << endl;
}
------------ RESULTS --------------------
0
0 1
0 1 2
0 1 2 3
0 1 2 3 4
0 1 2 3 4 5
0 1 2 3 4 5 6
0 1 2 3 4 5 6 7
0 1 2 3 4 5 6 7 8
0 1 2 3 4 5 6 7 8 9


//---------------------------------------------------------------------
// InsertSorted:
//---------------------------------------------------------------------
for (int i = 0; i < 10; ++i)
{
	cout << list[i] << " ";
}
------------ RESULTS --------------------
0 1 2 3 4 5 6 7 8 9


//---------------------------------------------------------------------
// LinkedListLibrary Tests:
//---------------------------------------------------------------------
LinkedListLibraryTest::TestInsertHead();
LinkedListLibraryTest::TestInsertAfter();
LinkedListLibraryTest::TestInsertBefore();
LinkedListLibraryTest::TestInsertSorted();
LinkedListLibraryTest::TestDeleteNode();
LinkedListLibraryTest::TestClearList();
LinkedListLibraryTest::TestSearchListTest();
LinkedListLibraryTest::TestPreviousNode();
LinkedListLibraryTest::TestAt();
LinkedListLibraryTest::TestLastNode();
LinkedListLibraryTest::TestPrintBackwards();
LinkedListLibraryTest::TestPrintList();
LinkedListLibraryTest::TestCopyList();
------------ RESULTS --------------------
Linked List Library Tests:
InsertHead
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

InsertAfter
10->|||
10->11->|||
10->11->12->|||
10->11->12->13->|||
10->11->12->13->14->|||
10->11->12->13->14->15->|||
10->11->12->13->14->15->16->|||
10->11->12->13->14->15->16->17->|||
10->11->12->13->14->15->16->17->18->|||
10->11->12->13->14->15->16->17->18->19->|||

InsertBefore
-1->|||
-50->-1->|||
-50->700->-1->|||

InsertSorted
0->|||
0->1->|||
0->1->2->|||
0->1->2->4->|||
0->1->2->3->4->|||
-1->0->1->2->3->4->|||

DeleteNode
10->11->12->13->14->15->16->17->18->19->|||
10->11->12->13->14->15->16->17->18->|||
11->12->13->14->15->16->17->18->|||
11->12->13->14->15->16->17->|||

ClearList
10->11->12->13->14->15->16->17->18->19->|||
10->11->12->13->14->15->16->17->18->19->|||
Empty

SearchList
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
Did not find item with value: -1
Found item with value: 3
Found item with value: 5
PreviousNode
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
0

At
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
0
1
2
3
4
5

LastNode
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
19

PrintList_backwards
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
|||<-19<-18<-17<-16<-15<-14<-13<-12<-11<-10<-9<-8<-7<-6<-5<-4<-3<-2<-1<-0

PrintList
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||

CopyList
List: 0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
Copied List: 0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||


//---------------------------------------------------------------------
// List Tests:
//---------------------------------------------------------------------
ListTest::TestInsertHead();
ListTest::TestInsertAfter();
ListTest::TestInsertBefore();
ListTest::TestInsertSorted();
ListTest::TestDelete();
ListTest::TestPrint();
ListTest::TestSearch();
ListTest::TestPrev();
ListTest::TestSubscriptOperator();
ListTest::TestBegin();
ListTest::TestEnd();
ListTest::TestStreamInsertionOperator();
------------ RESULTS --------------------
InsertHead
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
10->9->8->7->6->5->4->3->2->1->0->|||
11->10->9->8->7->6->5->4->3->2->1->0->|||
12->11->10->9->8->7->6->5->4->3->2->1->0->|||
13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
17->16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
18->17->16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
19->18->17->16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||

InsertAfter
0->1->|||
0->1->2->|||
0->1->2->3->|||
0->1->2->3->4->|||
0->1->2->3->4->5->|||
0->1->2->3->4->5->6->|||
0->1->2->3->4->5->6->7->|||
0->1->2->3->4->5->6->7->8->|||
0->1->2->3->4->5->6->7->8->9->|||
0->1->2->3->4->5->6->7->8->9->10->|||
0->1->2->3->4->5->6->7->8->9->10->11->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||

InsertBefore
1->0->|||
2->1->0->|||
3->2->1->0->|||
4->3->2->1->0->|||
5->4->3->2->1->0->|||
6->5->4->3->2->1->0->|||
7->6->5->4->3->2->1->0->|||
8->7->6->5->4->3->2->1->0->|||
9->8->7->6->5->4->3->2->1->0->|||
10->9->8->7->6->5->4->3->2->1->0->|||
11->10->9->8->7->6->5->4->3->2->1->0->|||
12->11->10->9->8->7->6->5->4->3->2->1->0->|||
13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
17->16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
18->17->16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||
19->18->17->16->15->14->13->12->11->10->9->8->7->6->5->4->3->2->1->0->|||

InsertSorted
0->|||
0->1->|||
0->1->2->|||
0->1->2->3->|||
0->1->2->3->4->|||
0->1->2->3->4->5->|||
0->1->2->3->4->5->6->|||
0->1->2->3->4->5->6->7->|||
0->1->2->3->4->5->6->7->8->|||
0->1->2->3->4->5->6->7->8->9->|||
0->1->2->3->4->5->6->7->8->9->10->|||
0->1->2->3->4->5->6->7->8->9->10->11->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->|||
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||

Delete
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
7->8->9->10->11->12->13->14->15->16->17->18->19->|||
8->9->10->11->12->13->14->15->16->17->18->19->|||
9->10->11->12->13->14->15->16->17->18->19->|||
10->11->12->13->14->15->16->17->18->19->|||
11->12->13->14->15->16->17->18->19->|||
12->13->14->15->16->17->18->19->|||
13->14->15->16->17->18->19->|||
14->15->16->17->18->19->|||
15->16->17->18->19->|||
16->17->18->19->|||
17->18->19->|||
18->19->|||
19->|||
Empty

Print
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
Search
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
Did not find: -5
Did not find: -4
Did not find: -3
Did not find: -2
Did not find: -1
Found: 0
Found: 1
Found: 2
Found: 3
Found: 4
Found: 5
Found: 6
Found: 7
Found: 8
Found: 9
Found: 10
Found: 11
Found: 12
Found: 13
Found: 14
Found: 15
Found: 16
Found: 17
Found: 18
Found: 19

Prev
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
Prev of 19: 18
Prev of 18: 17
Prev of 17: 16
Prev of 16: 15
Prev of 15: 14
Prev of 14: 13
Prev of 13: 12
Prev of 12: 11
Prev of 11: 10
Prev of 10: 9
Prev of 9: 8
Prev of 8: 7
Prev of 7: 6
Prev of 6: 5
Prev of 5: 4
Prev of 4: 3
Prev of 3: 2
Prev of 2: 1
Prev of 1: 0
Prev of 0: nullptr

operator[]
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
List[0]: 0
List[1]: 1
List[2]: 2
List[3]: 3
List[4]: 4
List[5]: 5
List[6]: 6
List[7]: 7
List[8]: 8
List[9]: 9
List[10]: 10
List[11]: 11
List[12]: 12
List[13]: 13
List[14]: 14
List[15]: 15
List[16]: 16
List[17]: 17
List[18]: 18
List[19]: 19

Begin
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
0

End
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
19

operator<<
0->1->2->3->4->5->6->7->8->9->10->11->12->13->14->15->16->17->18->19->|||
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19


*/
#endif // Z_OUTPUT_H