cmake_minimum_required(VERSION 3.0.0)
project(OpenCV VERSION 0.1.0)

set(OpenCV_DIR /usr/include/opencv4)
find_package( OpenCV REQUIRED )
find_package (Eigen3 3.3 REQUIRED NO_MODULE)

include_directories( ${OpenCV_INCLUDE_DIRS} )
include_directories(Images)

add_executable(DisplayImage DisplayImage.cpp)
add_executable(DisplayChannels ImageChannels.cpp)
add_executable(DisplayInfo Multispectral.cpp)

target_link_libraries( DisplayInfo Eigen3::Eigen )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )
target_link_libraries( DisplayChannels ${OpenCV_LIBS} )
target_link_libraries( DisplayInfo ${OpenCV_LIBS} )