```cpp
#include <iostream>
#include <vector>

int main() {
  std::vector<int> myVector;
  myVector.push_back(10);
  myVector.push_back(20);
  myVector.push_back(30);

  // Corrected loop to avoid out-of-bounds access
  for (size_t i = 0; i < myVector.size(); ++i) {
    std::cout << myVector[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
```