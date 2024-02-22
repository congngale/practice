# get contest
execute_process (
  COMMAND basename -z ${CMAKE_CURRENT_SOURCE_DIR}
  OUTPUT_VARIABLE CONTEST
)

# collect source files
file(GLOB FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

# build targets
foreach(FILE IN LISTS FILES)
	string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" CPP_FILE ${FILE})
	string(REPLACE ".cc" "" PROBLEM ${CPP_FILE})
	set(TARGET "${CONTEST}-${PROBLEM}")
    add_executable(${TARGET} ${FILE})
endforeach()
