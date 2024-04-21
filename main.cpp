#include <vector>
#include <iostream>
#include <sstream>
#include <iterator>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

void print(std::vector<int> list) {
  for (size_t i = 0; i < list.size() - 1; i++) {
    std::cout << list[i] << " ";
  }
  std::cout << list[list.size() - 1];
}

std::vector<int> getSpaceSeparatedInput() {
  std::string line;
  std::getline(std::cin, line);

  std::istringstream iss(line);
  std::vector<int> values(std::istream_iterator<int>{iss},
                         std::istream_iterator<int>{});

  return values;
}

int main() {
  QuickSort qs;
  RecursiveBinarySearch rb;
  std::vector<int> unsorted = getSpaceSeparatedInput();
  std::vector<int> qs_sorted = qs.sort(unsorted);
  int target = 1;
  bool result = rb.search(qs_sorted, target);
  std::cout << std::boolalpha << result << " ";
  print(qs_sorted);
  return 0;
}