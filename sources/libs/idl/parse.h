#pragma once

#include <idl/ast.h>
#include <stratus-parse>


IdlModule idl_parse_module(Scan *scan, Alloc *alloc);

IoResult idl_import_module(Str name, IdlModule *module, Alloc *alloc);
