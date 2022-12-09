# CMakeList.txt : CMake project for Pong, include source and define
# project specific logic here.
#

find_package(SFML COMPONENTS system window graphics network audio)

# Add source to this project's executable.
add_executable (Pong "main.cpp")

target_link_libraries(Pong PRIVATE sfml-graphics sfml-audio sfml-system sfml-network sfml-main sfml-window)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Pong PROPERTY CXX_STANDARD 20)
endif()


# TODO: Add tests and install targets if needed.
