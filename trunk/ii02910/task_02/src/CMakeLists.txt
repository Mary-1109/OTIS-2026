add_library(models
    LinearARXModel.cpp
    SaturationModel.cpp
    CubicODE.cpp
    InputGenerator.cpp
    SystemFactory.cpp
)
target_include_directories(models PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
