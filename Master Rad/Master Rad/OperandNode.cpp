#include "OperandNode.h"


std::string OperandNode::toString() {
	if (isUnderNegation)
		return "{" + std::string(1,symbol) + "}";
	else
		return std::string(1, symbol);
}

