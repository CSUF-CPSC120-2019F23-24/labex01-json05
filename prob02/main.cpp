// This program calculates the user's pay.

#include <iostream>

int main()
{
  double hours, rate, pay;

  // Get the number of hours worked.
  std::cout << "How many cookies do you have? ";
  std::cin >> hours;

  // Get the hourly pay rate.
  std::cout << "How many cookies does your friend have? ";
  std::cin >> rate;

  // Calculate the pay.
  pay = hours + rate;

  // Display the pay.
  std::cout << "You have " << pay << " cookies in total!" << std::endl;

  return 0;
}
