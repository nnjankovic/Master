/**
*	@file OperatorNode.h
*	@Author Nenad Jankovic 3204//15
*
*	This file contains declaration of OperatorNode interface.
*/

#pragma once

#ifndef OPERATORNODE_H_
#define OPERATORNODE_H_

#include "IBoolTreeNode.h"


/*! This abstract class implements IBoolTreeNode and
	represents operator node in BoolTree data structure.
*/
class OperatorNode :
	public IBoolTreeNode
{
public:
	/*! Constructor initializes both child nodes to nullptr and isNegated flag to false. 
	*/
	OperatorNode(bool underNegation = false) : leftChild(nullptr),
											   rightChild(nullptr),
											   isUnderNegation(underNegation)
	{}

	// IBoolTreeNode implementations
	virtual NodeType getNodeType() = 0;
	std::shared_ptr<IBoolTreeNode> getLeftChildNode() { return leftChild; }
	std::shared_ptr<IBoolTreeNode> getRightChildNode() { return rightChild; }
	virtual std::string toString() = 0;
	bool isNegated() { return isUnderNegation; }
	void setNegated(bool value) { isUnderNegation = value;}
	void setBoolTree(std::shared_ptr<BoolTree> tree) { myBoolTree = tree; }

	/*! Sets a left child node.
	*/
	void setLeftChildNode(std::shared_ptr<IBoolTreeNode> node);
	/*! Sets a right child node.
	*/
	void setRightChildNode(std::shared_ptr<IBoolTreeNode> node);

	/*! Virtual destructor.
	*/
	virtual ~OperatorNode() {}
private:
	std::shared_ptr<IBoolTreeNode> leftChild;
	std::shared_ptr<IBoolTreeNode> rightChild;

	// This value is an indication wheter this operation is under negation.
	bool isUnderNegation;

	// A pointer to the BoolTree structure to which this OperatorNode belongs
	std::shared_ptr<BoolTree> myBoolTree;
};

#endif // !OPERATORNODE_H_