/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (C) 2019, Raspberry Pi Ltd
 *
 * Lens Aware Algorithm
 */
#pragma once

#include "algorithm.h"

namespace RPiController {

class LensAwareAlgorithm : public Algorithm
{
public:
	LensAwareAlgorithm(Controller *controller) : Algorithm(controller) {}
    virtual void setAperture(double aperture) = 0;
    virtual void setZoomLabel(double zoomLabel) = 0;
};

} /* namespace RPiController */
