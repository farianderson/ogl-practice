#include <iostream>
//#include <thread>
//#include <chrono>

#include "../../include/Angine/Angine.hpp"

int main()
{
  An::Init();
  An::Loop();
//  std::this_thread::sleep_for(std::chrono::duration<int>(3));
  An::Exit(0);
}
