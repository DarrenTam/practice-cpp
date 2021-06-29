cmake_minimum_required(VERSION 3.17)
project(parctice_cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
set(CMAKE_CXX_STANDARD 20)

add_executable(parctice_cpp main.cpp vector_unittest.cpp vector.cpp vector.h)
target_link_libraries(parctice_cpp gtest_main)
add_test(NAME vector_test COMMAND vector)