#pragma once

#include <stratus-base>

#if defined(SYSTEM_SDL)
#    include <embed/sdl/win.h>
#elif defined(SYSTEM_STRATUS)
#    include <embed/stratus/win.h>
#else
#    error "Unsupported embedder!"
#endif

typedef struct _EmbedWin EmbedWin;
