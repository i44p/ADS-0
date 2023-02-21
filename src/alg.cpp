// Copyright 2021 NNTU-CS

int max(const int& a, const int& b)
{
    if (a > b)
        return a;
    return b;
}

int min(const int& a, const int& b)
{
    if (a > b)
        return a;
    return b;
}

int gcd(int a, int b) {
    int mi = min(a, b);
    int mod = max(a, b) % mi;

    return mod ? gcd(mod, mi) : mi;
}
