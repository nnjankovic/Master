/**
 *	@file ANDNode.h
 *	@Author Nenad Jankovic 3204//15
 *
 *	This file contains implementaion of ANDNode class which is used to represent
 *  AND operator in BoolTree data structure.
*/
#pragma once
#ifndef ANDNODE_H_
#define ANDNODE_H_

#include "OperatorNode.h"

class ANDNode :
	public OperatorNode
{
public:
	ANDNode();

	//IBoolTreeNode implementation
	NodeType getNodeType() { return AND_OPERATOR; }
	std::string toString();

	~ANDNode();
};

#endif // !ANDNODE_H_