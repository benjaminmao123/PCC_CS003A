#ifndef Z_OUTPUT_H
#define Z_OUTPUT_H
/*
***** ALL RESULTS ARE VERIFIED ******
//---------------------------------------------------------------------
// Push:
//---------------------------------------------------------------------
Push: 0
Push: 1
Push: 2
Push: 3
Push: 4
Push: 5
Push: 6
Push: 7
Push: 8
Push: 9
------------ RESULTS --------------------
Stack: |||
Stack: 0->|||
Stack: 1->0->|||
Stack: 2->1->0->|||
Stack: 3->2->1->0->|||
Stack: 4->3->2->1->0->|||
Stack: 5->4->3->2->1->0->|||
Stack: 6->5->4->3->2->1->0->|||
Stack: 7->6->5->4->3->2->1->0->|||
Stack: 8->7->6->5->4->3->2->1->0->|||
Stack: 9->8->7->6->5->4->3->2->1->0->|||


//---------------------------------------------------------------------
// Pop:
//---------------------------------------------------------------------
Push: 0
Push: 1
Push: 2
Push: 3
Push: 4
Push: 5
Push: 6
Push: 7
Push: 8
Push: 9

Pop
Pop
Pop
Pop
Pop
Pop
Pop
Pop
Pop
Pop
------------ RESULTS --------------------
Stack: 9->8->7->6->5->4->3->2->1->0->|||
Stack: 8->7->6->5->4->3->2->1->0->|||
Stack: 7->6->5->4->3->2->1->0->|||
Stack: 6->5->4->3->2->1->0->|||
Stack: 5->4->3->2->1->0->|||
Stack: 4->3->2->1->0->|||
Stack: 3->2->1->0->|||
Stack: 2->1->0->|||
Stack: 1->0->|||
Stack: 0->|||
Stack: |||


//---------------------------------------------------------------------
// Top:
//---------------------------------------------------------------------
Push: 0
Push: 1
Push: 2
Push: 3
Push: 4
Push: 5
Push: 6
Push: 7
Push: 8
Push: 9

Pop
Pop
Pop
Pop
Pop
Pop
Pop
Pop
Pop
Pop
------------ RESULTS --------------------
Stack: 0->|||
Top: 0
Stack: 1->0->|||
Top: 1
Stack: 2->1->0->|||
Top: 2
Stack: 3->2->1->0->|||
Top: 3
Stack: 4->3->2->1->0->|||
Top: 4
Stack: 5->4->3->2->1->0->|||
Top: 5
Stack: 6->5->4->3->2->1->0->|||
Top: 6
Stack: 7->6->5->4->3->2->1->0->|||
Top: 7
Stack: 8->7->6->5->4->3->2->1->0->|||
Top: 8
Stack: 9->8->7->6->5->4->3->2->1->0->|||
Top: 9

Stack: 8->7->6->5->4->3->2->1->0->|||
Top: 8
Stack: 7->6->5->4->3->2->1->0->|||
Top: 7
Stack: 6->5->4->3->2->1->0->|||
Top: 6
Stack: 5->4->3->2->1->0->|||
Top: 5
Stack: 4->3->2->1->0->|||
Top: 4
Stack: 3->2->1->0->|||
Top: 3
Stack: 2->1->0->|||
Top: 2
Stack: 1->0->|||
Top: 1
Stack: 0->|||
Top: 0
Stack: |||


//---------------------------------------------------------------------
// Iterator:
//---------------------------------------------------------------------
Push: 0
Push: 1
Push: 2
Push: 3
Push: 4
Push: 5
Push: 6
Push: 7
Push: 8
Push: 9

for (auto it = s.Begin(); it != s.End(); ++it)
{
    cout << *it << endl;
}
------------ RESULTS --------------------
9
8
7
6
5
4
3
2
1
0


*/
#endif // Z_OUTPUT_H