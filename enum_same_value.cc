#include <iostream>

int main() {
  typedef enum { item1 = 0, same1 = 0, // item1和same1值可以相同，但是名字不能相同，否则会造成重复定义
                 item2 = 1, same2 = 1,
                 item3 = 2} same_t;

  same_t obj = item1;
  switch (obj) {
    case 0:
      std::cout << 0 << std::endl;
      break;
    case 1:
      std::cout << 1 << std::endl;
      break;
    case 2:
      std::cout << 2 << std::endl;
      break;
    default:
      std::cout << -1 << std::endl;
      break;
  }

  return 0;
}
