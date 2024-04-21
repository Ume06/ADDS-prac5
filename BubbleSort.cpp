#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (std::size_t i = 0; i < list.size() - 1; i++) {
      if (list[i] > list[i + 1]) {
        std::swap(list[i], list[i + 1]);
        sorted = false;
      }
    }
  }
  return list;
}
