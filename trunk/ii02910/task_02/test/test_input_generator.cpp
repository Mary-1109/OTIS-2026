#include <gtest/gtest.h>
#include "InputGenerator.h"
#include <cmath>

// ConstantSignal
TEST(InputGenerator, ConstantLabel)
{
    ConstantSignal signal(1.0);
    EXPECT_EQ(signal.getLabel(), "Constant (u = 1.000000)");
}

TEST(InputGenerator, ConstantValue)
{
    ConstantSignal signal(1.0);
    EXPECT_NEAR(signal.getValue(1), 1.0, 1e-9);
    EXPECT_NEAR(signal.getValue(10), 1.0, 1e-9);
}

// PulseSignal
TEST(InputGenerator, PulseLabel)
{
    PulseSignal signal;
    EXPECT_EQ(signal.getLabel(), "Pulse (u_1 = 1, u_tau>1 = 0)");
}

TEST(InputGenerator, PulseValue)
{
    PulseSignal signal;
    EXPECT_NEAR(signal.getValue(1), 1.0, 1e-9);
    EXPECT_NEAR(signal.getValue(2), 0.0, 1e-9);
    EXPECT_NEAR(signal.getValue(10), 0.0, 1e-9);
}

// SineSignal
TEST(InputGenerator, SineLabel)
{
    SineSignal signal;
    EXPECT_EQ(signal.getLabel(), "Sine (u_tau = sin(tau))");
}

TEST(InputGenerator, SineValue)
{
    SineSignal signal;
    EXPECT_NEAR(signal.getValue(1), std::sin(1.0), 1e-9);
    EXPECT_NEAR(signal.getValue(2), std::sin(2.0), 1e-9);
}