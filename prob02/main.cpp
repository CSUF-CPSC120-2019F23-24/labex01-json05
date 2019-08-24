// This program calculates the user's pay.

#include <iostream>

int main()
{
  double hours, rate, pay;

  // Get the number of hours worked.
  std::cout << "How many pencils did you sell? ";
  std::cin >> hours;

  // Get the hourly pay rate.
  std::cout << "How much does each pencil cost? ";
  std::cin >> rate;

  // Calculate the pay.
  pay = hours * rate;

  // Display the pay.
  std::cout << "You have earned $" << pay << ". Good Job!" << std::endl;

  return 0;
}
