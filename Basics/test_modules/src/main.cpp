#include "camera.hpp"
#include <iostream>

int main(){

    Camera Cam1 = Camera();
    Cam1.SetCameraZoom(12.f);

    // sets the global extern variable to 12.f
    std::cout << CAMERA_ZOOM << "\n";
    return 0;
}