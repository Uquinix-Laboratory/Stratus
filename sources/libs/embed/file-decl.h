#pragma once

#include <stratus-base>

#if defined(SYSTEM_EFI)
#    include <embed/efi/file.h>
#elif defined(SYSTEM_POSIX)
#    include <embed/posix/file.h>
#elif defined(SYSTEM_STRATUS)
#    include <embed/stratus/file.h>
#elif defined(SYSTEM_KERNEL)
#    include <embed/kernel/file.h>
#else
#    error "Unsupported embedder!"
#endif

typedef struct _EmbedFile EmbedFile;
