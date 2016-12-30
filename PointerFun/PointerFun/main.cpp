 /* Node and other Linked Lists Practice
  * By Andrew Wang
  * ABOUT: Implementing basic insert and print functions to further understand how pointers can be
  * used to create nodes.
  */

#include <iostream>
#include <string>
#include "vector.h"
#include "node.h"

using namespace std;

#define STR_LEN	5

/* Function declarations */
void printNode(Node*);
Node* listOfNodes(string[]);

int main()
{
	A_Vector <string> a;
	string fruits[STR_LEN] = { "Apple", "Banana", "Grapefruit", "Oranges", "Kiwi" };
	for (int i = 0; i < STR_LEN; i++)
	{
		a.add(fruits[i]);
	}
	a.showContents();
	cout << "---------------------------------------" << endl;
	a.remove(2);
	a.showContents();
	system("PAUSE");
	return 0;
	
}

Node* listOfNodes(string strs[])
{
	Node *n = new Node[STR_LEN];
	for (int i = 0; i < STR_LEN; i++)
	{
		Node temp(strs[i]);
		n[i] = temp;
		if (i < STR_LEN - 1)
		{
			n[i].insert(&n[i + 1]);
		}
	}
	return n;
}
/* Print from the beginning of a specific node. If the next node points to NULL, then stop the printing. */
void printNode(Node* pt)
{
	while (pt != NULL) 
	{
		cout << (*pt).text << endl;
		pt = pt->next;
	}
}