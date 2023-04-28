local gl = require("moongl")
local glfw = require("moonglfw")
local window = require("engine.files.window")
local event = require("engine.files.event")
local draw = require("engine.files.draw")
local image = require("engine.files.image")
local color = require("engine.files.color")

glfw.window_hint('context version major', 3)
glfw.window_hint('context version minor', 3)
glfw.window_hint('opengl profile', 'core')

local function windowShouldClose(window)
    return glfw.window_should_close(window)
end

local function set_gl_version(major, minor, type)
    glfw.window_hint('context version major', major)
    glfw.window_hint('context version minor', minor)
    glfw.window_hint('opengl profile', type)
end

local function initGL()
    gl.init()
end

return {
    gl = gl,
    glfw = glfw,
    set_gl_version = set_gl_version,
    window = window,
    event = event,
    draw = draw,
    initGL = initGL,
    windowShouldClose = windowShouldClose,
    image = image,
    color = color,

}