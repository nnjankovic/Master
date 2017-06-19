#pragma once
#ifndef OPERATORNODE_H_
#define OPERATORNODE_H_

#include "IBoolTreeNode.h"

class OperatorNode :
	public IBoolTreeNode
{
public:
	OperatorNode();
	virtual ~OperatorNode();
};

#endif // !OPERATORNODE_H_