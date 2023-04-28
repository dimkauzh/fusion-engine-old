local gl = require("moongl")
local glfw = require("moonglfw")

local function setBackgroundColor(r, g, b, a)
    gl.clear_color(r, g, b, a)
    gl.clear("color", "depth")
end

return {
    setBackgroundColor = setBackgroundColor,
}