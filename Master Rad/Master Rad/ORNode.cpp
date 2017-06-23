#include "ORNode.h"

#include <cassert>

ORNode::ORNode()
{
}

std::string ORNode::toString() {
	assert(getLeftChildNode() != nullptr);
	assert(getRightChildNode() != nullptr);

	if (isOperationNegation())
		return "{" + getLeftChildNode()->toString() + "+" + getRightChildNode()->toString() + "}";

	return getLeftChildNode()->toString() + "+" + getRightChildNode()->toString();
}


ORNode::~ORNode()
{
}
