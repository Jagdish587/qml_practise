CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

PROJECT(TestClass
        LANGUAGES CXX)


find_package(Qt5Test REQUIRED)
find_package(Qt5Gui REQUIRED)

SET(CMAKE_AUTOMOC ON)
SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

ENABLE_TESTING()

set(PROJ_ROOT_DIR  ${CMAKE_SOURCE_DIR})

SET(SRC
    ${PROJ_ROOT_DIR}/src/myclass.cpp
    )

set(INC_DIR
    ${PROJ_ROOT_DIR}/src
    )

include_directories(
    ${INC_DIR}
    )


add_definitions(-DFOR_UNIT_TEST)
set(UNIT_TEST 1)
message(${UNIT_TEST} "unit test value")
if(UNIT_TEST)
message(UNIT_TEST "after value of unit test macro ")
add_executable(${PROJECT_NAME} tst_testclass.cpp ${SRC})
add_test(${PROJECT_NAME} COMMAND ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Gui Qt5::Test)
endif()
