#include "SDL2/SDL.h"
#include "SDL2/SDL_opengl.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_mixer.h"
#include "SDL2/SDL_ttf.h"
#include "SDL2/SDL_net.h"
#include "SDL2/SDL_thread.h"
#include "SDL2/SDL_mutex.h"
#include "SDL2/SDL_timer.h"
#include "SDL2/SDL_rwops.h"
#include "SDL2/SDL_endian.h"
#include "SDL2/SDL_haptic.h"
#include "SDL2/SDL_gamecontroller.h"
#include "SDL2/SDL_joystick.h"
#include "SDL2/SDL_scancode.h"
#include "SDL2/SDL_keycode.h"
#include "SDL2/SDL_mouse.h"
#include "SDL2/SDL_rect.h"
#include "SDL2/SDL_surface.h"
#include "SDL2/SDL_blendmode.h"
#include "SDL2/SDL_pixels.h"
#include "SDL2/SDL_render.h"
#include "SDL2/SDL_video.h"
#include "SDL2/SDL_events.h"
#include "SDL2/SDL_audio.h"
#include "SDL2/SDL_version.h"
#include "SDL2/SDL_assert.h"
#include "SDL2/SDL_log.h"
#include "SDL2/SDL_rwops.h"
#include "SDL2/SDL_cpuinfo.h"
#include "SDL2/SDL_platform.h"
#include "SDL2/SDL_power.h"
#include "SDL2/SDL_stdinc.h"
#include "SDL2/SDL_timer.h"
#include "SDL2/SDL_version.h"
#include "SDL2/SDL_assert.h"


#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>


#define for_loop(item, array) \
    for(int keep = 1, \
            count = 0,\
            size = sizeof (array) / sizeof *(array); \
        keep && count != size; \
        keep = !keep, count++) \
      for(item = (array) + count; keep; keep = !keep)

typedef struct SDL_Renderer Renderer;
typedef struct SDL_Window Window;
typedef struct SDL_Rect Rect;
typedef union SDL_Event Event;
typedef struct SDL_texture Texture;

