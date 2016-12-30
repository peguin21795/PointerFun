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
	/*string fruits[STR_LEN] = {"Apple", "Banana", "Grapefruit", "Oranges", "Kiwi"};
	Node* fruitNodes = listOfNodes(fruits);
	Node addInFruit("Guava");
	fruitNodes[2].insert(&addInFruit);
	printNode(&fruitNodes[2]);*/
	A_Vector <double> a;
	a.add(6);
	a.add(10);
	a.add(15);
	a.add(20);
	cout << a.getData(0) << endl;
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