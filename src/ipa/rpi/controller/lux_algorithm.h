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
	void setCurrentAperture(double aperture) { currentAperture_ = aperture; };
	void setCurrentZoomLabel(double zoomLabel) { currentZoomLabel_ = zoomLabel; };

protected:
	double currentAperture_;
	double currentZoomLabel_;
};

} /* namespace RPiController */
