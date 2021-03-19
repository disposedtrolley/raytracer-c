#include <unity.h>
#include <core/tuples.h>

void setUp(void) {}

void tearDown(void) {}

void test_point(void) {
    Point p = new_point(4.3, -4.2, 3.1);
    TEST_ASSERT_EQUAL_DOUBLE(4.3, p.x);
    TEST_ASSERT_EQUAL_DOUBLE(-4.2, p.y);
    TEST_ASSERT_EQUAL_DOUBLE(3.1, p.z);
    TEST_ASSERT_EQUAL_DOUBLE(1.0, p.w);
}

void test_vector(void) {
    Vector v = new_vector(4.3, -4.2, 3.1);
    TEST_ASSERT_EQUAL_DOUBLE(4.3, v.x);
    TEST_ASSERT_EQUAL_DOUBLE(-4.2, v.y);
    TEST_ASSERT_EQUAL_DOUBLE(3.1, v.z);
    TEST_ASSERT_EQUAL_DOUBLE(0.0, v.w);
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_point);
    RUN_TEST(test_vector);

    return UNITY_END();
}