local gl = require("moongl")
local glfw = require("moonglfw")

local function checkEvents()
    glfw.poll_events()
end

return {
    checkEvents = checkEvents,
}