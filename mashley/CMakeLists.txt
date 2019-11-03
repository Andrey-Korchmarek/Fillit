cmake_minimum_required(VERSION 3.14)
project(mashley)
set(CMAKE_C_STANDARD 99)
add_library(mashley check_neig.c ft_abs.c ft_intlen.c ft_range.c ft_shrinking_gap.c
		ft_strchri.c ft_strcount.c ft_strjoinfree.c ft_strplen.c
		hard_validation.c simple_validation.c validation.c)