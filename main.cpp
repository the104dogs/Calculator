#include <iostream>

int main() {
  double num1, num2;
  char operation;

  std::cout << "Enter the first number: ";
  std::cin >> num1;

  std::cout << "Enter the second number: ";
  std::cin >> num2;

  std::cout << "Enter the operation (+, -, *, /): ";
  std::cin >> operation;

  double result;
  if (operation == '+') {
    result = num1 + num2;
  } else if (operation == '-') {
    result = num1 - num2;
  } else if (operation == '*') {
    result = num1 * num2;
  } else if (operation == '/') {
    result = num1 / num2;
  } else {
    std::cout << "Invalid operator" << std::endl;
    return 1;
  }

  std::cout << "Result: " << result << std::endl;
  return 0;
}


/*uses the cout object to print text to the console. The main function is the entry point of the program, and the cout statement prints the text "Hello, World!" followed by a newline character (endl). The return 0; statement indicates that the program has completed successfully.
