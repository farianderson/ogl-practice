#include "../../include/Angine/An_Render.hpp"

namespace An
{
  // vertex data 
  const std::vector<GLfloat> hi_tri=
  {
    //x    y    z=0
    -.8, -.8,         //v1
    .0,  .8,         //v2
    .8, -.8,         //v3
  };

  const std::vector<GLfloat> tri_color=
  {
    1.0, 0.0, 0.0,
    0.0, 1.0, 0.0,
    0.0, 0.0, 1.0,
  };

  const std::vector<GLfloat> tri_pos_col=
  {
    -0.8,-0.8,
    1.0, 0.0, 0.0,
    0.8,-0.8,
    0.0, 1.0, 0.0,
    0.0, 0.8,
    0.0, 0.0, 1.0,
  };

  const std::vector<GLfloat> quad_pos_col=
  {
    -0.8,-0.8,
    1.0, 0.0, 0.0,
    -0.8, 0.8,
    0.0, 1.0, 1.0,
    0.8,-0.8,
    0.0, 1.0, 0.0,
    0.8, 0.8,
    1.0, 0.0, 1.0,
  };
  const std::vector<GLuint> quad_indices=
  {
    0,2,1,1,2,3,
    0,2,3,3,1,0,
  };
}
