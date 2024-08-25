/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (C) 2019, Raspberry Pi Ltd
 *
 * ALSC control algorithm
 */
#pragma once

#include "lens_aware_algorithm.h"

namespace RPiController {

class AlscAlgorithm : public LensAwareAlgorithm
{
public:
	AlscAlgorithm(Controller *controller) : LensAwareAlgorithm(controller) {}
};

} /* namespace RPiController */
