
add_executable(main main.cpp)

add_library(utilts utilts.cpp)

target_link_libraries(main utilts)