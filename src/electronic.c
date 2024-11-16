
/*

Автор: Александр Калинин

ОБЯЗАТЕЛЬНО прочитайте файл README.md

*/

double volts(double amperes, double ohms) {
    return amperes * ohms;
}

double volts_wa(double watts, double amps) {
    return watts / amps;
}

double amperes_wv(double watts, double volts) {
    return watts / volts;
}

double amperes(double volts, double ohms) {
    return volts / ohms;
}

double ohms(double volts, double amperes) {
    return volts / amperes;
}

double watts(double volts, double amperes) {
    return volts * amperes;
}

double voltage_divider(double volts, double r1, double r2) {
    return volts * (r2 / (r1 + r2));
}

