local engine = require "engine.engine"

local window = engine.window.newWindow(800, 600, "Example")
engine.window.setWindowCurrent(window)
engine.initGL()


while not engine.glfw.window_should_close(window) do
    -- checking for events
    engine.glfw.poll_events()
    -- ... rendering code goes here ...
    engine.draw.setBackgroundColor(1.0, 0.5, 0.2, 1.0) -- GLFW orange
    engine.window.swapBuffers(window)
end