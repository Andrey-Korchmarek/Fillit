
cmake_minimum_required(VERSION 3.14)
project(Fillit)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Wall -Wextra -Werror)

FILE(GLOB LIBRARY ./srcs/*.c )

include_directories(.)
include_directories(includes)
add_executable(Fillit ${LIBRARY} main.c srcs/matrix_generator.c srcs/ft_dannew.c srcs/line_generator.c srcs/matrix_create.c srcs/matrix_add_right.c srcs/matrix_delete.c)

