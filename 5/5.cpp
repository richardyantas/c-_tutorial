#include<iostream>
#include <GL/glx.h>    
#include <GL/gl.h>
//#include <GL/glut.h>
#include <GLFW/glfw3.h>  

//#include <richard.h>  // Pendiente hacer un .deb para instalar

using namespace std;

// sudo apt install mesa-utils
// sudo apt-get install freeglut3-dev
// g++ 5.cpp -o gl -lGL -lGLU -lglut && ./gl

//  g++   5.cpp -o 5.out -L /usr/local/lib/ -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl
//  g++ -std=c++11 5.cpp -o 5.out -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl




int main()
{
	GLFWwindow* window;

	if(!glfwInit())
	{
		return -1;
	}

	window = glfwCreateWindow(640, 680, "Hello world", NULL, NULL);

	if(!window)
	{
		glfwTerminate();
		return -1;
	}	

	glfwMakeContextCurrent(window);

	while(!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();

	cout << "Hello World" << endl;
}