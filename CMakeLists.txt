# cmake_minimum_required(VERSION <specify CMake version here>)
project(libft C)

set(CMAKE_C_STANDARD 99)

add_executable(libft main.c ft_atoi.c libft.h ft_strlen.c ft_strdup.c ft_strlcpy.c)