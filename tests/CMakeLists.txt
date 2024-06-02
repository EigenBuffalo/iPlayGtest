# Add include directory for tests
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Collect all test files
file(GLOB_RECURSE TEST_SOURCES "*.cpp")

# Create an executable for tests
add_executable(AllTests ${TEST_SOURCES})

# Link GoogleTest library and the lesson library
target_link_libraries(AllTests gtest gtest_main LessonLibrary)

# Add a custom target to run tests
add_custom_target(RunAllTests
  COMMAND AllTests
  DEPENDS AllTests
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# Enable test discovery for CTest
include(GoogleTest)
gtest_discover_tests(AllTests)
