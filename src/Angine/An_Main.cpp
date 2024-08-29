#include "../../include/Angine/An_Render.hpp"
#include "../../include/Angine/An_Inits.hpp"
#include "../../include/Angine/An_Events.hpp"
#include "../../include/Angine/An_Globals.hpp"
#include "../../include/Angine/An_Utilities.hpp"
#include "../../include/Angine/An_CleanUps.hpp"

#include <chrono>
#include <iostream>

int main()
{
  An::Init();
  An::TalkToTheVertex();
  An::Loadvshader("./shaders/vshader_001.glsl");
  An::Loadfshader("./shaders/fshader_001.glsl");
  An::CreateShaderProgram(An::vshader_src.c_str(),
                          An::fshader_src.c_str());
  std::cout << "vshader:\n" << An::vshader_src << std::endl;
  std::cout << "fshader:\n" << An::fshader_src << std::endl;

  // Loop
  auto start=std::chrono::steady_clock::now();
  int frames = 0;
  while(An::IsPlaying)
  {
    An::Events();
    An::fpsCalc(frames,start,.33333333);
    //SDL_Delay(8);
    An::PipeLine();
  }

  An::Exit(0);
}
