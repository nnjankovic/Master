/**
 *	@file IBoolTreeNode.h
 *	@Author Nenad Jankovic 3204//15
 *	
 *	This file contains declaration of IBoolTreeNode interface.
*/
#ifndef IBOOLTREENODE_H_
#define IBOOLTREENODE_H_

#include <memory>
#include <string>

enum NodeType {
	OPERATOR,
	OPERAND
};

class IBoolTreeNode
{
public:
	virtual NodeType getNodeType() = 0;
	virtual std::shared_ptr<IBoolTreeNode> getLeftChildNode() = 0;
	virtual std::shared_ptr<IBoolTreeNode> getRightChildNode() = 0;
	virtual std::string toString() = 0;

	virtual ~IBoolTreeNode(){}
};



#endif
