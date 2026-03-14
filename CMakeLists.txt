# The following five lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)

# Add extra component directories (e.g. custom components under `component/`)
set(EXTRA_COMPONENT_DIRS
    component/Middlewares
    component/BSP
)

add_compile_options(-fdiagnostics-color=always) # 添加组件颜色

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(test)
