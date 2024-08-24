#ifndef An_Render
#define An_Render

#include "../../include/glad/glad.h"

namespace An
{
  // defined in An_PipeLine.cpp
  void PipeLine();

  // creates some vertex data and sends it to the GPU.
  // defined in An_TalkToTheVertex.cpp
  void TalkToTheVertex();

  // defined in An_PreDraw.cpp
  void PreDraw();

  // defined in An_Draw.cpp
  void Draw();

  // creates a shader program into An::ShaderProgram.
  // defined in An_CreateShaderProgram.cpp
  void CreateShaderProgram(const char* vshader_src,
                           const char* fshader_src);

  // compiles a shader source text into a shader.
  // defined in An_ComplieShader.cpp
  GLuint CompileShader(GLenum type, const char* src);

}

#endif
