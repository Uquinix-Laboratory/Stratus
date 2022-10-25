#include <stratus-fmt>
#include <stratus-test>

#define TEST_CASE(EXPECTED, FORMAT, ...)                                                          \
    test_case$(EXPECTED)                                                                          \
    {                                                                                             \
        expect_str_equal$(str$(EXPECTED), fmt_str$(test_use_alloc(), str$(FORMAT), __VA_ARGS__)); \
    }

test$(fmt_format)
{
    TEST_CASE("hello, world", "hello, world");
}
