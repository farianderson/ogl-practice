#include "../../include/Angine/Angine.hpp"

namespace An
{
  const char* vshader_src=
    "#version 410 core\n"
    "in vec2 vpos;\n"
    "void main()\n"
    "{\n"
    "  gl_Position = vec2(vpos.x, vpos.y, 0.0, 1.0);\n"
    "}\n"
    ;
}
