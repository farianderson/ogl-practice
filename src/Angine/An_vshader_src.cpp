#include "../../include/Angine/An_Globals.hpp"

namespace An
{
  const GLchar* vshader_src=
    "#version 410 core\n"
    "in vec2 vpos;\n"
    "void main()\n"
    "{\n"
    "  gl_Position = vec4(vpos.x, vpos.y, 0.0f, 1.0f);\n"
    "}\n"
    ;
}
