#include "io.h"

int main(int argc, char *argv[])
{
    std::vector<Eigen::Vector3d> pts;
    std::vector<Tri> triangles;
    bool good = readObjFile(*argv, pts, triangles);

    

    return 0;
}