# get contest
execute_process (
  COMMAND basename ${CMAKE_CURRENT_SOURCE_DIR}
  OUTPUT_VARIABLE DIR_NAME
)

string(REPLACE "\n" "" CONTEST ${DIR_NAME})

# collect source files
file(GLOB FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

# build targets
foreach(FILE IN LISTS FILES)
   string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}/" "" CPP_FILE ${FILE})
   string(REPLACE ".cc" "" PROBLEM ${CPP_FILE})
   set(TARGET "${CONTEST}-${PROBLEM}-test")
   add_executable(${TARGET} ${FILE})
   add_custom_command(TARGET ${TARGET} POST_BUILD
      COMMAND ./${TARGET} ${CMAKE_SOURCE_DIR}
   )
endforeach()