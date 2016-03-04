#pragma once
#include "quakedef.h"

#define MAX_NUM_ARGVS 50

extern Mstring* com_argv;
extern size_t  com_argc;

bool com_init_argv(const u32 argc, char** argv);
bool com_clear_argv();
bool com_check_parm(const Mstring parm);
i32 com_atoi(const Mstring str);
