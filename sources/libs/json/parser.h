#pragma once

#include <json/objects.h>
#include <stratus-parse>

Json json_parse_array(Scan *scan, Alloc *alloc);

Json json_parse_object(Scan *scan, Alloc *alloc);

Json json_parse(Scan *scan, Alloc *alloc);

Json json_parse_str(Str str, Alloc *alloc);

Json json_parse_file(Str path, Alloc *alloc);
