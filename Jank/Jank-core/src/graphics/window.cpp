#include "window.h"
#include <iostream>

namespace jank
{
	namespace graphics 
	{
		jank::graphics::Window::Window(const char* title, int width, int height)
		{
			m_Title = title;
			m_Width = width;
			m_Height = height;

			if (!init())
			{
				glfwTerminate();
			}
		}

		Window::~Window()
		{
			glfwTerminate();
		}

		bool Window::init()
		{
			if (!glfwInit())//if glfw doesnt initialize
			{
				std::cout << "GLFW :: Initialization Failed" << std::endl;
				return false;
			}

			m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
			if (!m_Window) // if glfw window does not create
			{
				glfwTerminate();
				std::cout << "GLFW Window creation failed." << std::endl;
				return false;
			}
			
			glfwMakeContextCurrent(m_Window);//sets the window to the current open gl context
			return true;
		}

		void Window::update() const
		{
			glfwPollEvents();
			glfwSwapBuffers(m_Window);
		}

		bool Window::closed() const
		{
			return glfwWindowShouldClose(m_Window);
		}
	}
}
