#include <iostream>
#include <string>

int main()
{
  // nombre del usuario
  std::string name;
  // solicitud del nombre del usuario
  std::cout << "Enter your name:" << std::endl;
  // entrada del nombre
  std::cin >> name;
  // salida
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
