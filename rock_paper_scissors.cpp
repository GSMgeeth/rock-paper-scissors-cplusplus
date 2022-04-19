#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));

  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================" << std::endl;
  std::cout << "Rock Paper Scissors!" << std::endl;
  std::cout << "====================" << std::endl;

  std::cout << "1) ✊" << std::endl;
  std::cout << "2) ✋" << std::endl;
  std::cout << "3) ✌️" << std::endl;
  
  std::cout << "shoot!   > ";
  std::cin >> user;
  
  std::cout << "computer > " << computer << std::endl << std::endl;

  if ((user - computer == 1) || (user - computer == -2)) {
    std::cout << "YEAH!!! You won!" << std::endl;
  }
  else if ((user - computer == -1) || (user - computer == 2)) {
    std::cout << "OH!!! Computer won!" << std::endl;
  }
  else {
    std::cout << "It's a tie!" << std::endl;
  }
}
