#include <gtest/gtest.h>
#include "libs/mylib.h"

TEST(MathTest, sqrt4) {
	EXPECT_FLOAT_EQ(mysqrt(4.0), 2) << "fail on test 4.1";
}

TEST(MathTest, sqrt41) {
	EXPECT_FLOAT_EQ(mysqrt(4.1), 2) << "fail on test 4.1";
	// it's a wrong test, just for testing
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest( &argc, argv );
	return RUN_ALL_TESTS();
}
