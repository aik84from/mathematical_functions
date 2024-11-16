
/*

Автор: Александр Калинин

ОБЯЗАТЕЛЬНО прочитайте файл README.md

*/

#include <math.h>

double euclidean_distance_2Dmap(double ax, double ay, double bx, double by) {
    return sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
}

double manhattan_distance_2Dmap(double ax, double ay, double bx, double by) {
    return fabs(bx - ax) + fabs(by - ay);
}

