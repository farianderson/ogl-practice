#ifndef An_Render
#define An_Render

#include "../../include/glad/glad.h"
#include <string>

namespace An
{
  // defined in An_PipeLine.cpp
  void PipeLine();

  // creates some vertex data and sends it to the GPU.
  // defined in An_TalkToTheVertex.cpp
  void TalkToTheVertex();

  // defined in An_PreDraw.cpp
  void PreDraw();

  // clears color and depth buffer. defined in An_ClearColor.cpp
  void ClearColor();

  // defined in An_Draw.cpp
  void Draw();

  // creates a shader program into An::ShaderProgram.
  // defined in An_CreateShaderProgram.cpp
  void CreateShaderProgram(const GLchar* vshader_src,
                           const GLchar* fshader_src);

  // log for glLinkProgram and glValidateProgram.
  // defined in An_ShaderProgramLog.cpp
  bool ShaderProgramLog();

  // compiles a shader source text into a shader.
  // defined in An_ComplieShader.cpp
  GLuint CompileShader(GLenum type, const GLchar* src);

  // get shader source from a text file for An::vshader_src.
  // defined in An_LoadShaderFiles.cpp
  void Loadvshader(const char* filename);
  // get shader source from a text file for An::fshader_src.
  // defined in An_LoadShaderFiles.cpp
  void Loadfshader(const char* filename);

}

#endif
