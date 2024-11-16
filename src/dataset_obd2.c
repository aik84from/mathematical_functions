
/*

Автор: Александр Калинин

ОБЯЗАТЕЛЬНО прочитайте файл README.md

*/

unsigned long int milliseconds[] = { 0, 69, 144, 203, 272, 351, 418, 476, 546, 615, 684, 752, 821, 890, 960, 1029, 1097, 1177, 1245, 1313, 1382, 1441, 1509, 1567, 1635, 1705, 1774, 1843, 1912, 1981, 2050, 2122, 2191, 2260, 2328, 2398, 2468, 2558, 2629, 2698, 2769, 2838, 2909, 2990, 3058, 3126, 3195, 3266, 3337, 3406, 3527, 3606, 3723, 3792, 3871, 3940, 3998, 4067, 4137, 4217, 4297, 4367, 4436, 4504, 4585, 4657, 4726, 4797, 4868, 4938, 5007, 5076, 5155, 5225, 5293, 5362, 5443, 5510, 5575, 5643, 5711, 5780, 5848, 5917, 5986, 6054, 6125, 6194, 6262, 6331, 6410, 6480, 6549, 6618, 6697, 6766, 6834, 6904, 6972, 7040, 7111, 7181, 7248, 7317, 7385, 7453, 7522, 7591, 7681, 7750, 7818, 7929, 7999, 8070, 8140, 8209, 8279, 8349, 8424, 8495, 8566, 8637, 8707, 8786, 8855, 8937, 9007, 9077, 9146, 9215, 9284, 9363, 9444, 9514, 9585, 9655, 9724, 9792, 9861, 9929, 10019, 10089, 10170, 10238, 10308, 10378, 10446, 10515, 10584, 10654, 10725, 10784, 10853, 10921, 10991, 11059, 11124, 11189, 11267, 11335, 11402, 11471, 11538, 11608, 11677, 11746, 11825, 11895, 11964, 12033, 12101, 12169, 12237, 12306, 12375, 12454, 12524, 12592, 12661, 12730, 12798, 12868, 12937, 13005, 13074, 13143, 13244, 13325, 13393, 13462, 13531, 13600, 13658, 13737, 13808, 13877, 13947, 14016, 14083, 14152, 14222, 14314, 14395, 14455, 14524, 14615, 14685, 14754, 14826, 14885, 14944, 15013, 15082, 15151, 15222, 15290, 15360, 15429, 15498, 15568, 15626, 15695, 15762, 15829, 15900, 15970, 16041, 16111, 16193, 16264, 16332, 16400, 16467, 16536, 16604, 16673, 16742, 16800, 16865, 16930, 16999, 17068, 17136, 17203, 17272, 17340, 17433, 17501, 17568, 17636, 17706, 17774, 17843, 17913, 17981, 18050, 18120, 18189 };

unsigned long int speed[] = { 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 16, 16, 16, 17, 17, 18, 18, 19, 19, 20, 21, 21, 22, 22, 23, 23, 23, 24, 25, 25, 25, 26, 26, 26, 27, 27, 28, 28, 28, 29, 29, 29, 30, 30, 30, 31, 31, 31, 32, 32, 32, 33, 33, 33, 34, 34, 34, 35, 35, 35, 36, 36, 37, 37, 37, 38, 38, 38, 39, 39, 40, 40, 40, 41, 41, 41, 42, 42, 42, 43, 43, 43, 44, 44, 44, 44, 45, 45, 45, 45, 46, 46, 46, 46, 47, 47, 47, 48, 48, 48, 48, 49, 49, 49, 49, 49, 50, 50, 50, 51, 51, 51, 52, 52, 52, 52, 53, 53, 53, 54, 54, 54, 55, 55, 55, 55, 56, 56, 56, 56, 57, 57, 57, 57, 58, 58, 58, 59, 59, 59, 60, 60, 60, 60, 61, 61, 61, 61, 62, 62, 62, 62, 63, 63, 63, 64, 64, 64, 65, 65, 65, 65, 66, 66, 66, 66, 67, 67, 67, 67, 68, 68, 68, 69, 69, 69, 69, 70, 70, 70, 70, 71, 71, 71, 71, 72, 72, 72, 72, 72, 73, 73, 73, 73, 74, 74, 74, 74, 74, 75, 75, 75, 75, 75, 76, 76, 76, 76, 76, 77, 77, 77, 77, 78, 78, 78, 78, 79, 79, 79, 79, 79, 79, 80, 80, 80 };

unsigned long int distance[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 22, 22, 23, 23, 24, 25, 25, 26, 26, 27, 28, 28, 29, 30, 30, 31, 32, 32, 33, 34, 34, 35, 36, 37, 37, 38, 39, 40, 40, 41, 42, 43, 43, 44, 45, 46, 47, 48, 49, 50, 51, 51, 52, 53, 54, 55, 56, 57, 58, 58, 60, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 107, 108, 109, 110, 111, 112, 114, 115, 116, 117, 118, 119, 121, 122, 123, 124, 125, 127, 129, 130, 131, 132, 134, 135, 136, 137, 139, 140, 141, 142, 144, 145, 147, 148, 149, 151, 152, 154, 155, 156, 158, 159, 160, 161, 163, 164, 166, 167, 168, 170, 171, 172, 174, 175, 176, 178, 179, 181, 182, 184, 185, 187, 188, 189, 191, 192, 194, 195, 196, 198, 199, 201, 202, 204, 205, 206, 208, 210, 211, 213, 214, 216, 217, 219, 220, 222, 223, 225, 227 };
