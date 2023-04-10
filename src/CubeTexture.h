#ifndef CUBE_TEXTURE_H
#define CUBE_TEXTURE_H

#include "settings.h"

// CubeTexture is able to store and configure a cubeTexture in OpenGL.
// It also hosts utility functions for easy management.
class CubeTexture
{
public:
	// Holds the ID of the texture object, used for all texture operations to reference to this particlar texture
	GLuint ID;
	// Texture image dimensions
	GLuint Width, Height; // Width and height of loaded image in pixels
						  // Texture Format
	GLuint Internal_Format; // Format of texture object
	GLuint Image_Format; // Format of loaded image
						 // Texture configuration
	GLuint Wrap_S; // Wrapping mode on S axis
	GLuint Wrap_T; // Wrapping mode on T axis
	GLuint Filter_Min; // Filtering mode if texture pixels < screen pixels
	GLuint Filter_Max; // Filtering mode if texture pixels > screen pixels
					   // Constructor (sets default texture modes)
	CubeTexture();
	~CubeTexture();
	// Generates texture from image data
	void Generate(GLuint width, GLuint height, const vector<unsigned char*>& data, GLenum format);
	// Binds the texture as the current active GL_TEXTURE_2D texture object
	void Bind() const;
};


#endif