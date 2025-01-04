cmake_minimum_required(VERSION 3.29)

project(n
        DESCRIPTION
        "N is a general-purpose programming language"
        HOMEPAGE_URL
        "https://nlang.com"
        LANGUAGES
        C
)

set(N_VERSION_MAJOR 0)
set(N_VERSION_MINOR 1)
set(N_VERSION_PATCH 0)
set(N_VERSION "" CACHE STRING "Override N version string. Default is to find out with git.")

set(CMAKE_C_STANDARD 23)

add_executable(n main.c)