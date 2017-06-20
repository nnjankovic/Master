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

/*! This enum value determines wheter operator is AND(conjunction) or
	OR(disjunction) operator.
*/
enum OperatorType {
	AND, //*
	OR	//+
};

/*! This abstract class implements IBoolTreeNode and
	represents operator node in BoolTree data structure.
*/
class OperatorNode :
	public IBoolTreeNode
{
public:
	/*! Constructor initializes both child nodes to nullptr and isNegated flag to false. 
	*/
	OperatorNode() : leftChild(nullptr),
					 rightChild(nullptr),
					 isUnderNegation(false)
	{}

	// IBoolTreeNode implementations
	NodeType getNodeType() { return OPERATOR; }
	std::shared_ptr<IBoolTreeNode> getLeftChildNode() { return leftChild; }
	std::shared_ptr<IBoolTreeNode> getRightChildNode() { return rightChild; }
	virtual std::string toString() = 0;

	/*! Sets a left child node.
	*/
	void setLeftChildNode(std::shared_ptr<IBoolTreeNode> node) { leftChild = node; }
	/*! Sets a right child node.
	*/
	void setRightChildNode(std::shared_ptr<IBoolTreeNode> node) { rightChild = node; }

	/*! This function is called to determine wheter this operator in under negation.
	*/
	bool isOperationNegation() { return isUnderNegation; }
	/*! Sets if operator is under negation.
	*/
	void setIsUnderNegation(bool value) { isUnderNegation = value;}

	/*! Virtual destructor.
	*/
	virtual ~OperatorNode() {}
private:
	std::shared_ptr<IBoolTreeNode> leftChild;
	std::shared_ptr<IBoolTreeNode> rightChild;

	// This value is an indication wheter this operation is under negation.
	bool isUnderNegation;
};

#endif // !OPERATORNODE_H_