#include "../../include/Angine/Angine.hpp"

namespace An
{
  void CreateShaderProgram(const char* vshader_src, const char* fshader_src)
  {
    GLuint vshader = CompileShader(GL_VERTEX_SHADER, vshader_src);
    GLuint fshader = CompileShader(GL_FRAGMENT_SHADER, fshader_src);

    ShaderProgram = glCreateProgram();
    glAttachShader(ShaderProgram, vshader);
    glAttachShader(ShaderProgram, fshader);
    glLinkProgram(ShaderProgram);
    glValidateProgram(ShaderProgram);
  }
}
