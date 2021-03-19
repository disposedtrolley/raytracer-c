#include <unity.h>
#include <core/tuples.h>

void setUp(void) {}

void tearDown(void) {}

void test_my_tuple_func(void) {
    TEST_ASSERT_EQUAL(my_tuple_func(), 2);
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_my_tuple_func);

    return UNITY_END();
}