#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int score {100};
  int *score_ptr {&score};

  cout << *score_ptr << endl;

}