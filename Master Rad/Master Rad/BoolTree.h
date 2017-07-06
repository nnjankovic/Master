/**
*	@file BoolTree.h
*	@Author Nenad Jankovic 3204//15
*
*	This file contains implementaion of BoolTree class. This class is a tree
	data structure used to represent boolean expresions.
*/

#pragma once
#ifndef BOOLTREE_H_
#define BOOLTREE_H_

#include "IBoolTreeNode.h"
#include "OperandNode.h"
#include "ANDNode.h"
#include "ORNode.h"
#include "OperatorNode.h"

class BoolTree
{
public:
	BoolTree();
	std::string printExpresion() { return rootNode->toString(); }
	~BoolTree();
private:
	std::shared_ptr<OperatorNode> rootNode;
};

#endif // !BOOLTREE_H_