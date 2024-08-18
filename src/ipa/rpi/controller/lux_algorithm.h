/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (C) 2019, Raspberry Pi Ltd
 *
 * Lux control algorithm
 */
#pragma once

#include "algorithm.h"

namespace RPiController {

class LuxAlgorithm : public Algorithm
{
public:
	LuxAlgorithm(Controller *controller) : Algorithm(controller) {}
	/* A Lux algorithm must provide the following: */
	virtual void setCurrentAperture(double aperture) = 0;
	virtual void setCurrentZoomLabel(double zoomLabel) = 0;
};

} /* namespace RPiController */
