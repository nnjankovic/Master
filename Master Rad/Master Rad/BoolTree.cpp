#include "BoolTree.h"



BoolTree::BoolTree()
{
	rootNode = std::shared_ptr<OperatorNode>(new ANDNode());
	std::shared_ptr<OperatorNode> or = std::shared_ptr<ORNode>(new ORNode());
	or->setLeftChildNode(std::shared_ptr<IBoolTreeNode>(new OperandNode('a')));
	or->setRightChildNode(std::shared_ptr<IBoolTreeNode>(new OperandNode('b')));
	rootNode->setLeftChildNode(or);
	rootNode->setRightChildNode(std::shared_ptr<IBoolTreeNode>(new OperandNode('a')));
}


BoolTree::~BoolTree()
{
}
