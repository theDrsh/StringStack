#include "TrueStack.h"
#include <vector>

class StringStack : public TrueStack {
  private:
    std::vector<std::string> stack;
  public:
    std::string pop() = 0;
    void push(std::string) = 0;
    bool isEmpty() = 0;
};