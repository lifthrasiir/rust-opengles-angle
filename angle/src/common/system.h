//
// Copyright (c) 2002-2012 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// system.h: Includes Windows system headers and undefines macros that conflict.

#ifndef COMMON_SYSTEM_H
#define COMMON_SYSTEM_H

#if !defined(WIN32_LEAN_AND_MEAN)
#define WIN32_LEAN_AND_MEAN
#endif

#if !defined(_WIN32_WINNT)
#define _WIN32_WINNT 0x0600
#endif

#include <windows.h>
#include <d3d9.h>
#include <d3dcompiler.h>
#include <d3d9types.h>
#include <mmsystem.h>

#if defined(min)
#undef min
#endif

#if defined(max)
#undef max
#endif

#endif   // COMMON_SYSTEM_H
