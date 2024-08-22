#include "../../include/Angine/Angine.hpp"

namespace An
{
  const char* fshader_src=
    "#version 410 core\n"
    "out vec4 color;\n"
    "void main()\n"
    "{\n"
    "  color = vec4(0.8f, 0.5f, 0.1, 1.0f);\n"
    "}\n";
}
