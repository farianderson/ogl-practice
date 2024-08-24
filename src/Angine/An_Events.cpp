#include "../../include/Angine/An_Events.hpp"
#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  void Events()
  {
    while(SDL_PollEvent(&Event))
    {
      Input();
      WindowResized();
    }
  }
}
