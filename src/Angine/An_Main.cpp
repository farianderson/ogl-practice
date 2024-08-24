#include "../../include/Angine/An_Render.hpp"
#include "../../include/Angine/An_Inits.hpp"
#include "../../include/Angine/An_Events.hpp"
#include "../../include/Angine/An_Globals.hpp"
#include "../../include/Angine/An_Utilities.hpp"
#include "../../include/Angine/An_CleanUps.hpp"

#include <chrono>

int main()
{
  An::Init();
  An::TalkToTheVertex();
  An::CreateShaderProgram(An::vshader_src,An::fshader_src);

  // Loop
  SDL_GL_SetSwapInterval(1);
  auto start=std::chrono::steady_clock::now();
  int frames = 0;
  while(An::IsPlaying)
  {
    An::Events();
    An::PipeLine();
    An::fpsCalc(frames,start,.33333333);
    //SDL_Delay(8);
  } 
  An::Exit(0);
}
