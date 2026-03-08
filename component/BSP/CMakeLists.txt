# 定义源码目录（相对路径，指向当前组件下的LED文件夹）
set(src_dirs
    LED
)

# 定义头文件包含目录
set(include_dirs
    LED
)

# 定义组件依赖的库
set(requires
    driver
)

# 注册ESP-IDF组件（核心命令）
idf_component_register(SRC_DIRS ${src_dirs} 
                       INCLUDE_DIRS ${include_dirs} 
                       REQUIRES ${requires})

# 设置编译选项
component_compile_options(-ffast-math -O3 -Wno-error=format=-Wno-format)