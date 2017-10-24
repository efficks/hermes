#include <engine.h>
#include <inputfile.h>
#include <gtest/gtest.h>


namespace {

TEST(InputFile, works) {
	hermes::Engine e;
	hermes::input::InputFile f(e, "test");
}

}

GTEST_API_ int main(int argc, char **argv) {
	  printf("Running main() from gtest_main.cc\n");
	    testing::InitGoogleTest(&argc, argv);
	      return RUN_ALL_TESTS();
}
