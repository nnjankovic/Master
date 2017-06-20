/**
 *	@file IBoolTreeNode.h
 *	@Author Nenad Jankovic 3204//15
 *	
 *	This file contains declaration of IBoolTreeNode interface.
*/
#ifndef IBOOLTREENODE_H_
#define IBOOLTREENODE_H_

#include <memory>
#include <string>

#define INTF struct

/*! This enum value is 
	used to determine wheter node is operator or operand
*/
enum NodeType {
	OPERATOR,
	OPERAND
};

/*! This class provides an interface  
	that represents a node in BoolTree data structure.
*/
INTF IBoolTreeNode
{
public:
	/*! Returns the type of a node
	*/
	virtual NodeType getNodeType() = 0;

	/*! Returns a smart pointer to left or right child of the node if it exists 
		or nullpointer otherwise.
	*/
	virtual std::shared_ptr<IBoolTreeNode> getLeftChildNode() = 0;
	virtual std::shared_ptr<IBoolTreeNode> getRightChildNode() = 0;

	/*! Returns the string representation of node.
	*/
	virtual std::string toString() = 0;
};
#endif
