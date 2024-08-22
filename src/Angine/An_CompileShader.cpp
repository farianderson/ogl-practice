#include "../../include/Angine/Angine.hpp"

namespace An
{
  GLuint CompileShader(GLenum type, const char* src)
  {
    GLuint shader = glCreateShader(type);
    glShaderSource(shader,1,&src,nullptr);
    glCompileShader(shader);
    return shader;
  }
}
