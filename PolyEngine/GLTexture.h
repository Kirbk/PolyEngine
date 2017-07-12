#pragma once
#include <glew.h>
#include <string>

namespace PolyEngine {
	struct GLTexture {
		std::string filePath = "";
		GLuint id;
		int width;
		int height;
	};
}