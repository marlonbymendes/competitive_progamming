template<typename T>
struct Line {
    bool operator==(const Line& r) const
    {
        auto k = a ? a : b;
        auto s = r.a ? r.a : r.b;

        return equals(a*s, r.a*k) && equals(b*s, r.b*k) 
            && equals(c*s, r.c*k);
    }

    bool parallel(const Line& r) const
    {
        auto det = a*r.b - b*r.a;
        return det == 0 and !(*this == r);
    }
};

