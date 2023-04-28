local gl = require("moongl")
local glfw = require("moonglfw")


local function newWindow(w, h, title)
    local window = glfw.create_window(w, h, title)
    glfw.make_context_current(window)
    gl.viewport(0, 0, w, h)
    return window
end

local function setViewport(x, y, width, height)
    gl.viewport(x, y, width, height)
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
    setViewport = setViewport,
}