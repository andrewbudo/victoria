#include<iostream>
#include<vector>
#include<set>

struct Point{
    int x;
    int y;
};

int main()
{
    int N, C;
    double H;
    std::cin >> N >> H;
    std::vector<Point> v(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> v[i].x >> v[i].y;
    }
    std::vector<Point> peak;
    std::vector<Point> lowland;

    for (int i = 1; i <= N-2; ++i)
    {
        if (v[i].y < v[i+1].y && v[i-1].y > v[i].y)
        {
            lowland.push_back(v[i]);
        }

        if (v[i].y > v[i+1].y && v[i].y > v[i-1].y)
        {
            peak.push_back(v[i]);
        }
    }

    std::cout << "Lowland points" << std::endl;
    for (auto& i : lowland)
    {
        std::cout << "(" << i.x <<","<<i.y << ")" << ' ';
    }
    std::cout << std::endl;
    std::cout << "Peak points" << std::endl;
    for (auto& i : peak)
    {
        std::cout << "(" << i.x <<","<<i.y << ")" << ' ';
    }
/*
    std::vector<int> K;
    for (int i = 0; i < C; i++)
    K.push_back(i);
    std::vector<int>b(K.begin(), K.begin() + C);
    std::vector<int>c(K.begin() + C, K.begin() + N);
*/
}
