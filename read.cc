#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream infile("input.txt");
  std::string line;
  while (std::getline(infile, line)) {
    std::cout << line << std::endl;
  }

  return 0;
}
