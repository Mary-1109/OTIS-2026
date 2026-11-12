#pragma once

#include "AbstractSystem.h"

class SaturationModel : public AbstractSystem
{
private:
    double a, b, uMin, uMax;
    double currentY = 0.0;

    double applySaturation(double u) const;

public:
    SaturationModel(double a_, double b_, double uMin_, double uMax_);
    double step(double u) override;
    void reset() override;
    std::string getDescription() const override;
};