#pragma once

#include <stratus-base>
struct _Context
{
    uintptr_t syscall_kernel_stack;
    uintptr_t syscall_user_stack;
};
