#-----------------------------------------------
#  Source code compilation instructions
#-----------------------------------------------

include_directories(
	source
)

FILE(
	GLOB PROJECT_SOURCE_FILES

	source/CLI/*.cpp
	source/Settings/*.cpp
	source/Core/*.cpp
	source/*.cpp
	
	source/CLI/*.h
	source/Settings/*.h
	source/Core/*.h
	source/*.h
)

add_executable(binvcs ${PROJECT_SOURCE_FILES})
set_target_properties(binvcs PROPERTIES RUNTIME_OUTPUT_DIRECTORY "release")
set_target_properties(binvcs PROPERTIES RUNTIME_OUTPUT_DIRECTORY_DEBUG "debug")
