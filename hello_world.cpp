#include <iostream>
#include <string>

int
main()
{
  // user's name variable
  std::string name;
  // request for name user
  std::cout << "Enter your name:" << std::endl;
  // input name !
  std::cin >> name;
  // output !!!!
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
