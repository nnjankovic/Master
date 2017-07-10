/**
*	@file OperandNode.h
*	@Author Nenad Jankovic 3204//15
*
*	This file contains implementaion of OperandNode class which is used to represent
*   operands in BoolTree data structure.
*/

#pragma once
#ifndef OPERANDNODE_H_
#define OPERANDNODE_H_

#include "IBoolTreeNode.h"
#include "BoolTree.h"

class OperandNode : 
	public IBoolTreeNode
{
public:
	OperandNode(char c, bool underNegation = false) : isUnderNegation(underNegation),
												      symbol(c),
													  myBoolTree(nullptr)
	{};

	// IBoolTreeNode implementations
	NodeType getNodeType() { return NodeType::OPERAND; };
	std::shared_ptr<IBoolTreeNode> getLeftChildNode() { return nullptr; }
	std::shared_ptr<IBoolTreeNode> getRightChildNode() { return nullptr; }
	std::string toString();
	bool isNegated() { return isUnderNegation; }
	void setNegated(bool value) { isUnderNegation = value; }
	void setBoolTree(std::shared_ptr<BoolTree> tree) { myBoolTree = tree; }

	~OperandNode() {};
private:
	char symbol;
	bool isUnderNegation;

	std::shared_ptr<BoolTree> myBoolTree;
};

#endif // !OPERANDNODE_H_