
cmake_minimum_required(VERSION 3.14)
project(Fillit)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Wall -Wextra -Werror)

FILE(GLOB LIBRARY ./libft/*.c ./mashley/*.c)

include_directories(.)
include_directories(libft)
include_directories(mashley)
include_directories(aelphias)
add_executable(Fillit ${LIBRARY} fillit.c read_and_validation.c calculation.c)

