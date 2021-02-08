#include <iostream>
#include "Tasks.h"
#include <stack>
#define SIZE 10


namespace custom {

  int stack[SIZE]; // 10 * 4 = 40 bytes -> memory
  int top = -1; // marks that stack is empty
// top = 0
//
  bool isEmpty() {
    if (top < 0) {
      return true;
    } else {
      return false;
    }
  }

  bool isStackFull() {
    if (top >= SIZE) {
      return true;
    } else {
      return false;
    }
  }


  void push(int element) {
    if (!isStackFull()) {
      top++; // top = top + 1;
      stack[top] = element;
    } else {
      cout << "STACK IS FULL!" << endl;
    }

  }

  int pop() {
    int temp = 0;
    if (!isEmpty()) {
      temp = stack[top];
      stack[top] = 0;
      top--; // top = top - 1
      return temp;
    } else {
      cout << "stack is empty!" << endl;
      return -1;
    }
  }

  void PrintTOP() {
    if (!isEmpty())
      cout << "TOP ELEMENT: " << stack[top] << endl;
  }

  void DisplayStack() {

    if (!isEmpty()) {

      for (int i = 0; i < top + 1; ++i) {
        cout << stack[i] << " ";
      }
      cout << endl;
    } else {
      cout << "Stack is Empty!" << endl;
    }
  }

  void App() {

    push(44);
    push(55);
    push(66);
    // 66 + 55 = 121

    push(pop() + pop());
    pop();
    pop();

    if (top > 1)
      push(pop() + pop());

    DisplayStack();
    PrintTOP();


  }
}



class Person{
public:
  int age;
};

void stackFromSTL(){

  stack<int> st;
  stack<Person> person;

  Person person1;

  person.emplace(person1);


  
  st.push(22);
  st.pop();
  st.empty();
  st.top();
  st.size();
  st.emplace();



}





int main() {


  Tasks task;

  int input = 1;

  while (input != 0) {

    std::cout << "Choose task:" << std::endl;
    std::cout << "1. STACK" << std::endl;
    std::cout << "2. QUEUE" << std::endl;
    std::cout << "3. LINKED LIST" << std::endl;
    std::cout << "4. CUSTOM APP" << std::endl;
    cin >> input;

    switch (input) {
      case 1:
        task.Stack();
        break;
      case 2:
        task.Queue();
        break;
      case 3:
        task.LinkedList();
        break;
      case 4:
        custom::App();
        break;
      default:
        cout << "wrong selection" << endl;
        break;
    }
  }

  return 0;
}
