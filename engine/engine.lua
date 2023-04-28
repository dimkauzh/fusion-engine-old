local gl = require("moongl")
local glfw = require("moonglfw")
local window = require("engine.enginefiles.window")
local event = require("engine.enginefiles.event")
local draw = require("engine.enginefiles.draw")

glfw.window_hint('context version major', 3)
glfw.window_hint('context version minor', 3)
glfw.window_hint('opengl profile', 'core')

local function set_gl_version(major, minor, type)
    glfw.window_hint('context version major', major)
    glfw.window_hint('context version minor', minor)
    glfw.window_hint('opengl profile', type)
end

return {
    gl = gl,
    glfw = glfw,
    set_gl_version = set_gl_version,
    window = window,
    event = event,
    draw = draw
}