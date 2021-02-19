//Задача 9. Направете функця add(), която събира две точки
struct point
{
    int x;
    int y;
};
struct point add(struct point a, struct point b)
{
    struct point point = {a.x + b.x, b.x + b.y};
    return point;
}