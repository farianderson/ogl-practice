#include "../../include/Angine/Angine.hpp"

#include <iostream>


namespace An
{
  // exit program returning 'status'
  void Exit(int status)
  {
    CleanUps();
    std::cout << "exiting the Angine..." << std::endl;
    exit(status);
  }
}
