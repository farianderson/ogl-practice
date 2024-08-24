#include "../../include/Angine/Angine.hpp"
#include "../../include/Angine/An_Inits.hpp"
#include "../../include/Angine/An_Globals.hpp"

int main()
{
  An::Init();
  An::TalkToTheVertex();
  An::CreateShaderProgram(An::vshader_src,An::fshader_src);
  An::Loop();
  An::Exit(0);
}
