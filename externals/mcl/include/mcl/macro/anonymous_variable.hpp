// This file is part of the mcl project.
// Copyright (c) 2022 merryhime
// SPDX-License-Identifier: MIT

#pragma once

#include <mcl/macro/concatenate_tokens.hpp>

// __COUNTER__ triggers -Werror,-Wc2y-extensions under Clang 22.1.8 with -pedantic-errors; use __LINE__.
#define ANONYMOUS_VARIABLE(str) CONCATENATE_TOKENS(str, __LINE__)
