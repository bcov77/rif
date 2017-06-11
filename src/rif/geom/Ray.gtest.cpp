#include <gtest/gtest.h>

#include <geom/Ray.hpp>

namespace rif {
namespace geom {
namespace test_numeric_Ray {

using V = V3<float>;
using X = X3<float>;

TEST(Ray, ray_basic_tests) {
  Ray<> r;
  ASSERT_FLOAT_EQ(r.dirn.norm(), 1.0);
  Ray<> s(V(0, 0, 0), V(2, 0, 0));
  ASSERT_FLOAT_EQ(s.dirn.norm(), 1.0);
  X trans10 = xform(V(10, 0, 0));
  Ray<> t = trans10 * s;
  ASSERT_TRUE(t.dirn.isApprox(V(1, 0, 0)));
  ASSERT_TRUE(t.orig.isApprox(V(10, 0, 0)));
}

TEST(Ray, rand_ray_gaussian) {
  for (int i = 0; i < 1000; ++i) {
    auto ray = rand_ray_gaussian<float>();
    ASSERT_FLOAT_EQ(ray.dirn.norm(), 1.0);
    ASSERT_LT(ray.orig.norm(), 200.0);
  }
}
}
}
}