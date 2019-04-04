template<typename T>
bool contains(const Point<T>& A, const Point<T>& B, const Point<T>& P)
{
    if (P == A || P == B)
        return true;

    auto xmin = min(A.x, B.x);
    auto xmax = max(A.x, B.x);
    auto ymin = min(A.y, B.y);
    auto ymax = max(A.y, B.y);

    if (P.x < xmin || P.x > xmax || P.y < ymin || P.y > ymax)
        return false;

    return equals((P.y - A.y)*(B.x - A.x), (P.x - A.x)*(B.y - A.y));
}

