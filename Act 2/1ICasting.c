#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    int x;
    int y;
    int z;
} Point3D;

int main() {
    Point p;
    Point3D *p3d;

    printf("Ingrese las coordenadas x e y para Point: ");
    scanf("%d %d", &p.x, &p.y);

    Point3D p3d_explicit = (Point3D){p.x, p.y, 0};
    printf(" x=%d, y=%d, z=%d\n", p3d_explicit.x, p3d_explicit.y, p3d_explicit.z);

    return 0;
}
