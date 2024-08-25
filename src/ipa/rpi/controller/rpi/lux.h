/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (C) 2019, Raspberry Pi Ltd
 *
 * Lux control algorithm
 */
#pragma once

#include <mutex>

#include <libcamera/base/utils.h>

#include "../lux_status.h"
#include "../lux_algorithm.h"

/* This is our implementation of the "lux control algorithm". */

namespace RPiController {

class Lux : public LuxAlgorithm
{
public:
	Lux(Controller *controller);
	char const *name() const override;
	int read(const libcamera::YamlObject &params) override;
	void prepare(Metadata *imageMetadata) override;
	void process(StatisticsPtr &stats, Metadata *imageMetadata) override;
	void setAperture(double aperture) override;
	void setZoomLabel(double zoomLabel) override;
private:
	/*
	 * These values define the conditions of the reference image, against
	 * which we compare the new image.
	 */
	libcamera::utils::Duration referenceShutterSpeed_;
	double referenceGain_;
	double referenceAperture_; /* units of 1/f */
	double referenceY_; /* out of 65536 */
	double referenceLux_;
	double referenceZoomLabel_;
	double currentAperture_;
	double currentZoomLabel_;
	LuxStatus status_;
	std::mutex mutex_;
};

} /* namespace RPiController */
