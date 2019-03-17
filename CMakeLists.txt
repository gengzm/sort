cmake_minimum_required(VERSION 3.2)

add_compile_options(-std=c++11)

PROJECT(sort)


include_directories(
    inlcude
)

add_executable(bubble src/bubble_sort.cpp)
add_executable(select src/select_sort.cpp)
add_executable(shell src/shell_sort.cpp)
add_executable(insert src/insert_sort.cpp)
add_executable(quick src/quick_sort.cpp)
add_executable(oddeven src/oddeven_sort.cpp)
#  target_link_libraries(${PROJECT_NAME})
