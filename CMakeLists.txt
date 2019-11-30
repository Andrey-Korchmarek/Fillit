
cmake_minimum_required(VERSION 3.14)
project(Fillit)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Wall -Wextra -Werror)

FILE(GLOB LIBRARY ./libft/*.c  )

include_directories(.)

include_directories(libft)
#include_directories(srcs)
add_executable(Fillit ${LIBRARY} ./fillit/main.c ./fillit/gen_map.c ./fillit/fillit.c ./fillit/backtrack.c ./fillit/validation.c ./fillit/check_sign.c
./fillit/check_neig1.c ./fillit/check_neig2.c ./fillit/first.c ./fillit/check_tetr.c ./fillit/ft_strcount.c )

