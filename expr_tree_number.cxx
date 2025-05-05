#include "expr_tree_number.hpp"
#include <stdexcept>

ExprTreeNumber::ExprTreeNumber(int value) : value(value) {}

void ExprTreeNumber::addRight(ExprTree* child)
{
	throw std::logic_error("Error in logic, this method shouldn't have been called");

}

int ExprTreeNumber::calculate() const {
	return value;
}