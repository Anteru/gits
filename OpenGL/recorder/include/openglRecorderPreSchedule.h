// ===================== begin_copyright_notice ============================
//
// Copyright (C) 2023-2025 Intel Corporation
//
// SPDX-License-Identifier: MIT
//
// ===================== end_copyright_notice ==============================

/**
* @file   openglRecorderPreSchedule.h
*
* @brief Automatically generated declarations
*
*/

#pragma once
#include "gitsFunctions.h"
#include "state.h"
#include "recorder.h"

namespace gits {
namespace OpenGL {
inline void coherentBufferUpdate_PS(CRecorder& recorder) {
  if (SD().GetCurrentSharedStateData().coherentBufferMapping == true &&
      SD().GetCurrentContext() != nullptr) {
    recorder.Schedule(new CgitsCoherentBufferMapping(
        CCoherentBufferUpdate::TCoherentBufferData::TEXTURE_UPDATE,
        CCoherentBufferUpdate::TCoherentBufferData::UPDATE_BOUND,
        Configurator::Get().opengl.recorder.coherentMapUpdatePerFrame));
  }
}

} // namespace OpenGL
} // namespace gits
