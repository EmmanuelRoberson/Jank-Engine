#pragma once

#include <GLFW/glfw3.h>

namespace jank {
	namespace graphics
	{
		class Window
		{
		private:
			const char* m_Title; // name of the window
			int m_Width, m_Height; // width and height of the window
			GLFWwindow* m_Window; //glfw window pointer. needed to create a window instance on the screen
			bool m_Closed;
		public:
			Window(const char* title, int width, int height);
			~Window();
			void update() const;
			bool closed() const;
		private:
			bool init();

		};

	}
}

