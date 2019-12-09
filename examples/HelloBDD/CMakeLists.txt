project(HelloBDD)

add_library(HelloBDD STATIC src/Hello)
target_include_directories(HelloBDD INTERFACE src)

if(TARGET GTest::GTest)
    add_executable(HelloBDDSteps features/step_definitions/HelloBDDSteps)
    target_link_libraries(HelloBDDSteps PRIVATE HelloBDD cucumber-cpp GTest::GTest)
endif()

