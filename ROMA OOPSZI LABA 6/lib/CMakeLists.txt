add_library(tlib STATIC  "Stack1.cpp" "Stack2.cpp" "StackBase.cpp" "UnidirCyclicList.cpp")
target_include_directories(tlib PUBLIC "../header")