package main

import "github.com/go-gl/glfw/v3.3/glfw"

var myerror error

func check_error() {
	if myerror != nil {
		panic(myerror)
	}
}

func main() {
	glfw.Init()
	defer glfw.Terminate()

	var window, err = glfw.CreateWindow(640, 480, "Testing", nil, nil)
	myerror = err

	window.MakeContextCurrent()

	for !window.ShouldClose() {
		// Do OpenGL stuff.
		window.SwapBuffers()
		glfw.PollEvents()
		check_error()
	}
}
