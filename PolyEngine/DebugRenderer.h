#pragma once

#include "GLSLProgram.h"
#include "Vertex.h"
#include <glm.hpp>
#include <vector>

namespace PolyEngine {
	class DebugRenderer {
	public:
		DebugRenderer();
		~DebugRenderer();

		void init();
		void end();
		void drawLine(const glm::vec2& a, const glm::vec2& b, const ColorRGBA8& color);
		void drawBox(const glm::vec4& destRect, const ColorRGBA8& color, float angle);
		void drawCircle(const glm::vec2& center, const ColorRGBA8& color, float radius);
		void render(const glm::mat4& projectionMatrix, float lineWidth);
		void dispose();

		struct DebugVertex {
			glm::vec2 position;
			PolyEngine::ColorRGBA8 color;
		};
	private:
		PolyEngine::GLSLProgram m_program;
		std::vector<DebugVertex> m_verts;
		std::vector<GLuint> m_indices;
		GLuint m_vbo = 0, m_vao = 0, m_ibo = 0;
		size_t m_numElements = 0;
	};

}