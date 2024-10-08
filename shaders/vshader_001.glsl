#version 410

out vec3 color;
out vec2 vpos;
layout(location=0)in vec2 pos;
layout(location=1)in vec3 col;
uniform mat4 model;

void main()
{
  vpos = vec2(pos.x,pos.y);
  color = vec3(col.r, col.g, col.b);
  gl_Position = model * vec4(vpos,0,1.0);
}
