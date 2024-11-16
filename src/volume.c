
/*

Автор: Александр Калинин

ОБЯЗАТЕЛЬНО прочитайте файл README.md

*/

#include <math.h>

double cylinder_volume(double radius, double height) {
    return M_PI * pow(radius, 2) * height;
}

double sphere_volume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

