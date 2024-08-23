/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (C) 2019, Raspberry Pi Ltd
 *
 * Lux control algorithm
 */
#pragma once

#include "lens_aware_algorithm.h"

namespace RPiController {

class LuxAlgorithm : public LensAwareAlgorithm
{
public:
	LuxAlgorithm(Controller *controller) : LensAwareAlgorithm(controller) {}
};

} /* namespace RPiController */
