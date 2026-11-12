add_library(models
    LinearARXModel.cpp
    SaturationModel.cpp
    CubicODE.cpp
    InputGenerator.cpp
    SystemFactory.cpp
)
target_include_directories(models PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(ii02910_task_02
    main.cpp
)
target_link_libraries(ii02910_task_02 PRIVATE models)