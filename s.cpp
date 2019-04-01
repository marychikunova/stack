#include <iostream>
#define SIZE 100

template <typename T>
class stack
{
private:
  T stck[SIZE];
  unsigned capacity;
public:
  stack();  // constructor
  ~stack(); // destructor
  void push(int i);
  int pop();
};

template <typename T>
stack<T>::stack()
{
  capacity = 0;
  std::cout << "Stack Initialized\n";
}

template <typename T>
stack<T>::~stack()
{
  std::cout << "Stack Destroyed\n";
}

template <typename T>
void stack<T>::push(int i)
{
  if(capacity==SIZE)
  {
    std::cout << "Stack is full.\n";
    return;
  }
  stck[capacity] = i;
  capacity++;
}

template <typename T>
stack<T>::pop()
{
  if(capacity==0)
  {
    std::cout << "Stack underflow.\n";
    return 0;
  }
  capacity--;
  return stck[capacity];
}


int main()
{
  stack<int> a, b;
  a.push(12);
  b.push(-2);

  a.push(365);
  b.push(455);

  std::cout << a.pop() << " ";
  std::cout << a.pop() << " ";
  std::cout << b.pop() << " ";
  std::cout << b.pop() << "\n";

  return 0;
}
