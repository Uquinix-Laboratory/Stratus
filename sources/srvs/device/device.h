#pragma once

#include <stratus-ds>

typedef struct _Device Device;

struct _Device
{
    Vec(Device *) devices;
};
