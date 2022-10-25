#pragma once

#include <stratus-base>

#if defined(SYSTEM_SDL)
#    include <embed/sdl/app.h>
#elif defined(SYSTEM_STRATUS)
#    include <embed/stratus/app.h>
#else
#    error "Unsupported embedder!"
#endif

typedef struct _EmbedApp EmbedApp;
