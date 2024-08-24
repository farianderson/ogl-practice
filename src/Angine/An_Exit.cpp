#include "../../include/Angine/An_CleanUps.hpp"

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
