cmake_minimum_required(VERSION 4.1)
project(postfixcalc C)

set(CMAKE_C_STANDARD 11)

add_executable(postfixcalc calculator.c
        stack.c)
