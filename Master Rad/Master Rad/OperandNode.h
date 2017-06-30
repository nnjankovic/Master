/**
*	@file OperandNode.h
*	@Author Nenad Jankovic 3204//15
*
*	This file contains implementaion of OperandNode class which is used to represent
*   operands in BoolTree data structure.
*/

#pragma once
#ifndef OPERATORNODE_H_
#define OPERATORNODE_H_

#include "IBoolTreeNode.h"


class OperandNode : 
	public IBoolTreeNode
{
public:
	OperandNode(char c) : isUnderNegation(false),
						  symbol(c)
	{};

	// IBoolTreeNode implementations
	NodeType getNodeType() { return NodeType::OPERAND; };
	std::shared_ptr<IBoolTreeNode> getLeftChildNode() { return nullptr; }
	std::shared_ptr<IBoolTreeNode> getRightChildNode() { return nullptr; }
	std::string toString();
	bool isNegated() { return isUnderNegation; }
	void setNegated(bool value) { isUnderNegation = value; }

	~OperandNode() {};
private:
	char symbol;
	bool isUnderNegation;
};

#endif // !OPERATORNODE_H_