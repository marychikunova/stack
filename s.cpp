#include <iostream>

#define SIZE 100

class stack
{
  int stck[SIZE];
  int tos;
public:
  stack();  // constructor
  ~stack(); // destructor
  void push(int i);
  int pop();
};

stack::stack()
{
  tos = 0;
  std::cout << "Stack Initialized\n";
}


stack::~stack()
{
  std::cout << "Stack Destroyed\n";
}

void stack::push(int i)
{
  if(tos==SIZE)
  {
    std::cout << "Stack is full.\n";
    return;
  }
  stck[tos] = i;
  tos++;
}

int stack::pop()
{
  if(tos==0)
  {
    std::cout << "Stack underflow.\n";
    return 0;
  }
  tos--;
  return stck[tos];
}


int main()
{
  stack a, b;
  a.push(1);
  b.push(2);

  a.push(3);
  b.push(4);

  std::cout << a.pop() << " ";
  std::cout << a.pop() << " ";
  std::cout << b.pop() << " ";
  std::cout << b.pop() << "\n";

  return 0;
}
