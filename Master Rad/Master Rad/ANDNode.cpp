#include <cassert>

#include "ANDNode.h"


std::string ANDNode::toString() {
	assert(getLeftChildNode() != nullptr);
	assert(getRightChildNode() != nullptr);

	std::string result = getLeftChildNode()->toString();

	if (getLeftChildNode()->getNodeType() == NodeType::OR_OPERATOR)
		result = "(" + result + ")";

	result += "*";

	if (getRightChildNode()->getNodeType() == NodeType::OR_OPERATOR)
		result += "(";

	result += getRightChildNode()->toString();

	if (getRightChildNode()->getNodeType() == NodeType::OR_OPERATOR)
		result += ")";

	if (isNegated())
		result = "{" + result + "}";

	return result;
}
