#include "../../include/Angine/Angine.hpp"
#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  void PreDraw()
  {
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glClearColor(CleaerColor[0],CleaerColor[1],CleaerColor[2],CleaerColor[3]);
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    glUseProgram(ShaderProgram);

  }
}
