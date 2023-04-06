// ===================== begin_copyright_notice ============================
//
// Copyright (C) 2023 Intel Corporation
//
// SPDX-License-Identifier: MIT
//
// ===================== end_copyright_notice ==============================

/**
* @file   l0Library.h
*
* @brief Declaration of LevelZero library implementation.
*
*/

#pragma once

#include "library.h"

namespace gits {
namespace l0 {
class CFunction;
/**
    * @brief LevelZero library class
    *
    * gits::l0::CLibrary class provides LevelZero library tools
    * for GITS project. It is responsible for creating LevelZero
    * function call wrappers based on unique ID.
    */
class CLibrary : public gits::CLibrary {
public:
  static CLibrary& Get();
  CLibrary(gits::CLibrary::state_creator_t stc = gits::CLibrary::state_creator_t());
  ~CLibrary();

  gits::CFunction* FunctionCreate(unsigned id) const override;

  const char* Name() const override {
    return "L0";
  }
};
} // namespace l0
} // namespace gits
