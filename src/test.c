
/*

Автор: Александр Калинин

ОБЯЗАТЕЛЬНО прочитайте файл README.md

*/

#include <stdio.h>
#include "distance.c"
#include "volume.c"
#include "electronic.c"
#include "kinetic_energy.c"
#include "error.c"
#include "speed.c"

void test(double a, double b) {
    if (error(a, b) > 0.000000001) {
        printf("%.10f => %.10f\n", a, b);
    } else {
        printf("OK\n");
    }
}

int main() {
    test(volts(4, 2), 8);
    test(volts_wa(120, 10), 12);
    test(amperes_wv(50, 2), 25);
    test(amperes(220, 2), 110);
    test(ohms(12, 2), 6);
    test(watts(5, 2), 10);
    test(voltage_divider(12, 1000, 1471), 7.1436665318);
    test(kinetic_energy(96, 20), 19200.0);
    test(mps_to_kmph(57), 205.2);
    test(mps_to_kmpm(400), 24.0);
    test(euclidean_distance_2Dmap(177, 232, 450, 73), 315.92720680562);
    test(manhattan_distance_2Dmap(177, 232, 450, 73), 432.0);
    test(cylinder_volume(154, 22), 1639132.2501958);
    test(sphere_volume(154), 15298567.6684939619);
    return 0;
}
