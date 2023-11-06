# CMakeList.txt: проект CMake для homework3.10.1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (homework3.10.1 "homework3.10.1.cpp" "homework3.10.1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET homework3.10.1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
