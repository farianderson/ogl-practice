#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  const GLchar* fshader_src=
    "#version 410 core\n"
    "out vec4 gl_Color;\n"
    "void main()\n"
    "{\n"
    "  gl_Color = vec4(.6,.4,.1,1.);\n"
    "}\n";
}
