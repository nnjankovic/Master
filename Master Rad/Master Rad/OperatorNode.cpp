#include "OperatorNode.h"

void OperatorNode::setLeftChildNode(std::shared_ptr<IBoolTreeNode> node) {
	leftChild = node; 
}

void OperatorNode::setRightChildNode(std::shared_ptr<IBoolTreeNode> node) {
	rightChild = node; 
}