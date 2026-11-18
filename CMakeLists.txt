cmake_minimum_required(VERSION 3.20)

project(C C)

set(CMAKE_C_STANDARD 23)

add_executable(Hello_World Hello_World/main.c)

add_executable(arithmetic sintax_and_basic/arithmetic.c)
add_executable(exemples sintax_and_basic/exemples.c)
add_executable(variables sintax_and_basic/variables.c)
add_executable(constants sintax_and_basic/constants.c)
add_executable(conversion sintax_and_basic/conversion.c)
add_executable(operators sintax_and_basic/operators.c)

add_executable(if_else control_flow/if_else.c)
add_executable(booleanos control_flow/booleanos.c)
add_executable(switch control_flow/switch.c)
