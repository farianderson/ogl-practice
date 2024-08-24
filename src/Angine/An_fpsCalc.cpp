#include "../../include/Angine/An_Utilities.hpp"

#include <iostream>

namespace An
{
  // prints out the fps. frames and start_time_point should be passed by
  // reference.
  void fpsCalc(int& frames,std::chrono::time_point<std::chrono::steady_clock>&
      start_time_point,float interval_sec)
  {
    frames++;
    auto now = std::chrono::steady_clock::now();
    auto d = std::chrono::duration<double>(now-start_time_point);
    auto _d = std::chrono::duration<float> (interval_sec);
    if(d >= _d)
    {
      start_time_point = now;
      std::cout << "fps = " << frames/interval_sec << " ";
      frames = 0;

      std::cout << std::endl;
    }
  }
}
