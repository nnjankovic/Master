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

#include "BoolTree.h"

#define INTF struct

/*! This enum value is 
	used to determine the type of a node.
	Node can be AND_OPERATOR, OR_OPERATOR or OPERAND.
*/
enum NodeType {
	AND_OPERATOR,
	OR_OPERATOR,
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

	/*! Return true if node is under negation, returns false otherwise.
	*/
	virtual bool isNegated() = 0;
	
	/*! Sets the negation value of a node.
	*/
	virtual void setNegated(bool value) = 0;

	/*! Sets the pointer to the BoolTree structure to which the node belongs
	*/
	virtual void setBoolTree(std::shared_ptr<BoolTree> tree) = 0;
};
#endif
