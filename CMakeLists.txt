cmake_minimum_required(VERSION 3.10.0)
project(blank VERSION 0.1.0 LANGUAGES C)


add_executable(
	blank
	main.c
	utils/cli-utils.c
	utils/general-utils.c
	health/health.c
)

target_include_directories(blank PUBLIC include)