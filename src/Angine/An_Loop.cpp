#include "../../include/Angine/Angine.hpp"
#include "../../include/Angine/An_Globals.hpp"
#include "../../include/Angine/An_Events.hpp"
#include "../../include/Angine/An_Utilities.hpp"

#include<chrono>

namespace An
{
  void Loop()
  {
    SDL_GL_SetSwapInterval(1);

    auto start=std::chrono::steady_clock::now();
    int frames = 0;

    while(IsPlaying)
    {
      Events();

      PipeLine();

      fpsCalc(frames,start,.33333333);

      //SDL_Delay(8);

      SDL_GL_SwapWindow(Window);
    } 
  }
}
