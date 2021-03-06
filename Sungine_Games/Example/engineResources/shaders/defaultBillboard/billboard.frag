#version 410 core

uniform vec4 Color;
uniform sampler2D Texture;

layout(location = 0) out vec4 FragColor;

in block
{
        vec2 TexCoord;
        vec3 Position;
        vec3 Normal;
} In;

void main()
{
	//no lighting for the moment 

        FragColor = texture2D(Texture, In.TexCoord) * Color;
}
