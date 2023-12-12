/* Copy piece of UTF-32 string, return pointer after last written unit.
   Copyright (C) 2020-2023 Free Software Foundation, Inc.
   Written by Bruno Haible <bruno@clisp.org>, 2023.

   This file is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   This file is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include "unistr.h"

#define FUNC u32_pcpy
#define UNIT uint32_t
#define U_CPY u32_cpy
#include "u-pcpy.h"
