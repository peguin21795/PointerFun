#ifndef NODE_H
#define NODE_H

#include <string>
using namespace std;

class Node
{
public:
	// Instance variable and pointer
	Node* next;
	string text;
	// Constructors
	Node(string);
	Node();
	// Functions
	void insert(Node* newNode);
};

#endif