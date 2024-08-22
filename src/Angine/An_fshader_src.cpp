#include "../../include/Angine/Angine.hpp"

namespace An
{
  const char* fshader_src=
    "#version 410 core\n"
    "out vec4 color;\n"
    "void main()\n"
    "{\n"
    "  color = vec4(.8,.5,.1,1.0);\n"
    "}\n"
    ;
}
