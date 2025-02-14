// ===================== begin_copyright_notice ============================
//
// Copyright (C) 2023-2025 Intel Corporation
//
// SPDX-License-Identifier: MIT
//
// ===================== end_copyright_notice ==============================

#pragma once

#include "layerAuto.h"

namespace gits {

class CGits;

namespace DirectX {

struct HelloPluginConfig {
  bool printFrames = false;
  bool printGPUSubmissions = false;
};

class HelloPluginLayer : public Layer {
public:
  HelloPluginLayer(CGits& gits, const HelloPluginConfig& cfg);
  ~HelloPluginLayer() = default;

  void post(IDXGISwapChainPresentCommand& c) override;
  void post(IDXGISwapChain1Present1Command& c) override;
  void post(ID3D12CommandQueueExecuteCommandListsCommand& c) override;

private:
  void newFrame();

  CGits& gits_;
  HelloPluginConfig cfg_;
};

} // namespace DirectX
} // namespace gits
