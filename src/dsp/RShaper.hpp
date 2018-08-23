#pragma once

#include "WaveShaper.hpp"

#define RSHAPER_NOISE 0.0017234327
#define RSHAPER_GAIN 0.05

namespace dsp {

    struct ReShaper : WaveShaper {

        Noise *noise;


    public:

        explicit ReShaper(float sr);

        void init() override;
        void invalidate() override;
        void process() override;
        double compute(double x) override;

    };

}