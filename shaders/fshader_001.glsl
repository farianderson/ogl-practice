#version 410

in vec3 color;

out vec4 fcolor;
void main()
{
  fcolor = vec4(color.r, color.g, color.b, 1);
}
