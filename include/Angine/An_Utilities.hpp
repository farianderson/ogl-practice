#ifndef An_Utilities
#define An_Utilities

#include <SDL2/SDL.h>
#include <string>
#include <chrono>
namespace An
{
  // prints out the fps. frames and start_time_point should
  // be passed by reference. defined in An_fpsCalc.cpp
  void fpsCalc(int& frames,
               std::chrono::time_point<
               std::chrono::steady_clock> &start_time_point,
               float interval_sec);

  // updates the viewport to match the An::Window size
  void ViewPortUpdate();

  // loads a text file as string
  std::string LoadTextFile(const char* filename);
}

#endif
