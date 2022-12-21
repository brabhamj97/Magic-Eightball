#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "MAGIC EIGHTBALL:\n\n";

  // random number 0-9
  srand(time(NULL));

  int answer = std::rand() % 10;

  if (answer == 0) {
    std::cout << "It is certain";
  }
  else if (answer == 1) {
    std::cout << "Ask again later";
  }
  else if (answer == 2) {
    std::cout << "Better not tell you now";
  }
  else if (answer == 3) {
    std::cout << "Don't count on it";
  }
  else if (answer == 4) {
    std::cout << "My reply is no";
  }
  else if (answer == 5) {
    std::cout << "Most likely";
  }
  else if (answer == 6) {
    std::cout << "Outlook good";
  }
  else if (answer == 7) {
    std::cout << "Yes.";
  }
  else if (answer == 8) {
    std::cout << "It appears that way";
  }
  else {
    std::cout << "Very doubtful";
  }
}
