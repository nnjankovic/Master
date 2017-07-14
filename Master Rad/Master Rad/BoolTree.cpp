#include "BoolTree.h"


#include <algorithm>

BoolTree::BoolTree()
{
	m_RootNode = std::shared_ptr<OperatorNode>(new ANDNode());
	std::shared_ptr<OperatorNode> or = std::shared_ptr<ORNode>(new ORNode());
	or->setLeftChildNode(std::shared_ptr<IBoolTreeNode>(new OperandNode('a')));
	or->setRightChildNode(std::shared_ptr<IBoolTreeNode>(new OperandNode('b')));
	m_RootNode->setLeftChildNode(or);
	m_RootNode->setRightChildNode(std::shared_ptr<IBoolTreeNode>(new OperandNode('a')));
}

std::shared_ptr<ANDNode> BoolTree::createNewANDNode(bool underNegation)
{
	std::shared_ptr<ANDNode> newAndNode(new ANDNode(underNegation));
	m_AndVector.push_back(newAndNode);
	return newAndNode;
}

std::shared_ptr<ORNode> BoolTree::createNewORNode(bool underNegation)
{
	std::shared_ptr<ORNode> newOrNode(new ORNode(underNegation));
	m_OrVector.push_back(newOrNode);
	return newOrNode;
}

std::shared_ptr<OperandNode> BoolTree::createNewOperandNode(char c, bool underNegation)
{
	std::shared_ptr<OperandNode> newOperandNode(new OperandNode(c, underNegation));
	m_OperandsVector.push_back(newOperandNode);
	return newOperandNode;
}


BoolTree::~BoolTree()
{
}
