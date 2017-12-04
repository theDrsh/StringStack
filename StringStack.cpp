#include "StringStack.h"

void StringStack::push(std::string newMember) {
    stack.insert(stack.begin(), newMember);
}

bool StringStack::isEmpty() {
    return stack.empty();
}

std::string StringStack::pop() {
    std::string retVal = stack[0];
    stack.erase(stack.begin());
    return retVal;
}