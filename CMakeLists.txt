cmake_minimum_required(VERSION 3.10.0)
project(SystemManager VERSION 0.1.0 LANGUAGES C)

add_executable(
	sysmanager
	main.c
	utils/cli-utils.c
	utils/general-utils.c
	health/health.c
	src/app/app.c
)

target_include_directories(sysmanager PUBLIC include)