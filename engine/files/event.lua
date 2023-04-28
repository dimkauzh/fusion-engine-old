local gl = require("moongl")
local glfw = require("moonglfw")

local function checkEvents()
    return glfw.poll_events()
end

return {
    checkEvents = checkEvents,
}