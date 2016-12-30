#include "node.h"
using namespace std;

/* Constructor */
Node::Node(string text)
{
	this->text = text;
	next = NULL;
}

/* Default constructor */
Node::Node()
{
	this->text = "";
	next = NULL;
}

/* Insertion Function */
void Node::insert(Node* newNode)
{
	newNode->next = next;
	next = newNode;
}
