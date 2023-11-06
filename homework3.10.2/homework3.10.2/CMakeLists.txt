# CMakeList.txt: проект CMake для homework3.10.2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (homework3.10.2 "homework3.10.2.cpp" "homework3.10.2.h" "EquilateralTriangle.cpp" "EquilateralTriangle.h" "IsoscelesTriangle.cpp" "IsoscelesTriangle.h" "Parallelogram.cpp" "Parallelogram.h" "Quadrilateral.cpp" "Quadrilateral.h" "Rectangle.cpp" "Rectangle.h" "Rhombus.cpp" "Rhombus.h" "RightTriangle.cpp" "RightTriangle.h" "Square.cpp" "Square.h" "Triangle.cpp" "Triangle.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET homework3.10.2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
