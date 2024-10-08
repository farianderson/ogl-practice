#include "../../include/Angine/An_Globals.hpp"

namespace An{
  bool IsPlaying=true;
  auto keyboardstate = SDL_GetKeyboardState(NULL);
  std::chrono::time_point<std::chrono::steady_clock> t0 = std::chrono::steady_clock::now();
  SDL_Window* Window=nullptr;
  SDL_GLContext Context=nullptr;
}
