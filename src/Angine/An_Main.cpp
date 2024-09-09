#include "../../include/Angine/An_Render.hpp"
#include "../../include/Angine/An_Inits.hpp"
#include "../../include/Angine/An_Events.hpp"
#include "../../include/Angine/An_Globals.hpp"
#include "../../include/Angine/An_Utilities.hpp"
#include "../../include/Angine/An_CleanUps.hpp"

#include <iostream>

int main()
{
  An::Init();
  An::TalkToTheVertex();
  An::Loadvshader("./shaders/vshader_001.glsl");
  An::Loadfshader("./shaders/fshader_001.glsl");
  An::CreateShaderProgram(An::vshader_src.c_str(),
                          An::fshader_src.c_str());

  std::cout << "\nvshader\n------------\n" <<
    An::vshader_src << std::endl;
  std::cout << "\nfshader\n------------\n" <<
    An::fshader_src << std::endl;

  An::printVerts(An::grid(10,10));

  // Loop
  while(An::IsPlaying)
  {
    An::Events();
    //SDL_Delay(8);
    An::PipeLine();
    An::fpsCalc(.75);
  }

  An::Exit(0);
}
