cmake_minimum_required(VERSION 3.14)
project(Escalonador C)

set(CMAKE_C_STANDARD 99)

add_executable(Escalonador send_receive.c PI.c ping_pong.c)