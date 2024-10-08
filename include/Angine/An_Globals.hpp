#ifndef An_Globals
#define An_Globals

#include <SDL2/SDL.h>
#include <chrono>

namespace An
{
  // defined in An_Globals.cpp
  extern bool IsPlaying;
  extern SDL_Window* Window;
  extern SDL_GLContext Context;
  extern std::chrono::time_point<std::chrono::steady_clock> t0;
}

#endif
