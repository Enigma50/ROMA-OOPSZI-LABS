add_library(tlib1 STATIC "task1while.c" "task2while.c" "task3while.c" "task4while.c" "task5while.c")
target_include_directories(tlib1 PUBLIC "../header")