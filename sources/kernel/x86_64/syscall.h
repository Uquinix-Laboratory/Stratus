#pragma once

#include <stratus-base>

void syscall_initialize(void);

void syscall_set_gs(uintptr_t addr);
