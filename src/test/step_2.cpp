
#include "Circle.hpp"

#include <nil/xit/gtest.hpp>

XIT_TEST(Sample, circle, "$group/.")
{
    auto sut = Circle{.x = 0.1, .y = 0.1, .radius = 1};

    (void)sut;
    // do your test here
}
