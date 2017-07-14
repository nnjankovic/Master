/**
*	@file ANDNode.h
*	@Author Nenad Jankovic 3204//15
*
*	This file contains implementaion of ORNode class which is used to represent
*   OR operator in BoolTree data structure.
*/

#pragma once
#ifndef ORNODE_H_
#define ORNODE_H_

#include "OperatorNode.h"

class ORNode :
	public OperatorNode
{
	friend class BoolTree;
private:
	ORNode(bool underNegation = false) : OperatorNode(underNegation)
	{};
public:
	//IBoolTreeNode implementation
	NodeType getNodeType() { return OR_OPERATOR; }
	std::string toString();

	~ORNode() {};
};

#endif // !ORNODE_H_