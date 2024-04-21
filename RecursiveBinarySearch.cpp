#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
  int result = binarySearch(list, 0, list.size() - 1, target);
  if (result != -1)
    return true;
  else
    return false;
}

//assume list is sorted
int RecursiveBinarySearch::binarySearch(std::vector<int> list, int left, int right, int target) {
  if (right - left < 1)
    return -1; 
  int middle = (left + right) / 2;
  if (list[middle] == target)
    return middle;
  int leftIndex = binarySearch(list, left, middle - 1, target);
  int rightIndex = binarySearch(list, middle + 1, right, target);
  if (leftIndex != -1)
    return leftIndex;
  if (rightIndex != -1)
    return rightIndex;
  return -1;
}