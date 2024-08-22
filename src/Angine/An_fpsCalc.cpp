#include <iostream>
#include <chrono>

#include "../../include/Angine/Angine.hpp"

namespace An
{
  // prints out the fps. frames and start_time_point should be passed by
  // reference.
  void fpsCalc(int& frames,std::chrono::time_point<std::chrono::steady_clock>&
      start_time_point)
  {
    frames++;
    auto now = std::chrono::steady_clock::now();
    auto d = std::chrono::duration<double>(now-start_time_point);
    if(d >= std::chrono::seconds(1))
    {
      start_time_point = now;
      std::cout << "fps = " << frames << "\n\e[A";
      frames = 0;
    }
  }
}
