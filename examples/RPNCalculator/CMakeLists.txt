project(RPNCalculator)

add_library(RPNCalculator STATIC src/RPNCalculator.cpp)
target_include_directories(RPNCalculator INTERFACE src)

if(TARGET GTest::GTest)
    add_executable(RPNCalculatorSteps features/step_definitions/RPNCalculatorSteps.cpp)
    target_link_libraries(RPNCalculatorSteps PRIVATE RPNCalculator cucumber-cpp GTest::GTest)
endif()
