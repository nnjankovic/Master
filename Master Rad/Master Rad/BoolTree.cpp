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

void BoolTree::registerNode(std::shared_ptr<IBoolTreeNode> node) {
	switch (node->getNodeType())
	{
		case OPERAND:
			if (std::find(m_OperandsVector.begin(), m_OperandsVector.end(), node) == m_OperandsVector.end())
				m_OperandsVector.push_back(std::static_pointer_cast<OperandNode>(node));
			break;
		case OR:
			if (std::find(m_OrVector.begin(), m_OrVector.end(), node) == m_OrVector.end())
				m_OrVector.push_back(std::static_pointer_cast<ORNode>(node));
			break;
		case AND:
			if (std::find(m_AndVector.begin(), m_AndVector.end(), node) == m_AndVector.end())
				m_AndVector.push_back(std::static_pointer_cast<ANDNode>(node));
			break;
		default:
			break;
	}


}


BoolTree::~BoolTree()
{
}
