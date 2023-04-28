local engine = require "engine.engine"

local window = engine.window.newWindow(800, 600, "Example")
engine.initGL()


while not engine.windowShouldClose(window) do
    -- checking for events
    engine.event.checkEvents()
    -- ... rendering code goes here ...
    engine.draw.setBackgroundColor(engine.color.green)
    engine.window.swapBuffers(window)
end