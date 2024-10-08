#include "../../include/Angine/An_Render.hpp"
#include "../../include/Angine/An_Globals.hpp"

#include <SDL2/SDL.h>
#include <chrono>

namespace An
{
  void PipeLine()
  {
    auto t = std::chrono::steady_clock::now();
    auto dur = std::chrono::duration<double>(t-t0);
    SetUniforms(10*dur.count());
    PreDraw();
    Draw();
    //SDL_Delay(134);
    SDL_GL_SwapWindow(Window);
  }
}
