cmake_minimum_required(VERSION 3.14)
project(mashley)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Wall -Wextra -Werror)

FILE(GLOB LIBRARY ./src/*.c ./libft/*.c)

include_directories(.)

include_directories(includes)
add_executable(mashley ${LIBRARY})
