#include <iostream>
#include <vector>

using namespace std;

int& test(int& input) {
  return input;
}

int main() {
  int a = 1;
  int& b = a;
  cout << a << "  " << b << endl;
  b--;
  cout << a << "  " << b << endl;

  // exp2
  int temp = 2;
  //test(temp) = 100;
  //cout << temp << endl;
  auto c = test(temp);
  cout << c << endl;
  c++;
  cout << c << "  " << temp << endl;

  // exp3
  vector<int> d = {0, 1, 2};
  auto first = d.front();
  first++;
  cout << first << "  " << d.front() << endl;

  return 0;
}
