local gl = require("moongl")
local glfw = require("moonglfw")

local function newWindow(w, h, title)
    return glfw.create_window(w, h, title)
end

local function setWindowCurrent(window)
    glfw.make_context_current(window)
end

local function swapBuffers(window)
    glfw.swap_buffers(window)
end

return {
    newWindow = newWindow,
    setWindowCurrent = setWindowCurrent,
    swapBuffers = swapBuffers,
}