#include <vector>
#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

class RecursiveBinarySearch {
  public:
    bool search(std::vector<int>, int);
  private:
    int binarySearch(std::vector<int> list, int left, int right, int target);
};

#endif