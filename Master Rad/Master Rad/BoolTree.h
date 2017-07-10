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

#include <vector>

class BoolTree
{
public:
	BoolTree();
	std::string printExpresion() { return m_RootNode->toString(); }
	~BoolTree();
private:
	std::shared_ptr<OperatorNode> m_RootNode;
	std::vector<std::shared_ptr<OperandNode>> m_OperandsVector;
	std::vector<std::shared_ptr<ORNode>> m_OrVector;
	std::vector<std::shared_ptr<ANDNode>> m_AndVector;

	void registerNode(std::shared_ptr<IBoolTreeNode> node);
};

#endif // !BOOLTREE_H_