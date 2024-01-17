#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point lb;
    struct point rt;
};

int perimetr(struct rect square);

int main() {
    struct rect square;

    printf("Введите координаты x и y нижней левой точки прямоугольника\n");
    scanf("%d %d", &square.lb.x, &square.lb.y);
    printf("Введите координаты x и y верхней правой точки прямоугольника\n");
    scanf("%d %d", &square.rt.x, &square.rt.y);
    
    printf("Периметр прямоугольника равен %d\n", perimetr(square));

    return 0;
}

int perimetr(struct rect square) {
    return 2 * (square.rt.x - square.lb.x) + 2 * (square.rt.y - square.lb.y);
};