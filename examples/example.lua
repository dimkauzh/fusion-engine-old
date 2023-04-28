local engine = require "engine.engine"

local window = engine.glfw.create_window(600, 400, "Hello, World!")
engine.glfw.make_context_current(window)
engine.gl.init() -- this is actually glewInit()

local function reshape(_, w, h) 
   print("window reshaped to "..w.."x"..h)
   engine.gl.viewport(0, 0, w, h)
end

engine.glfw.set_window_size_callback(window, reshape)

while not engine.glfw.window_should_close(window) do
   engine.glfw.poll_events()
   -- ... rendering code goes here ...
   engine.gl.clear_color(1.0, 0.5, 0.2, 1.0) -- GLFW orange
   engine.gl.clear("color", "depth")
   engine.glfw.swap_buffers(window)
end