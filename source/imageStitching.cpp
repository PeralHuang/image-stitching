#include "core/imageStitcher.h"

using namespace sis;

int main(int argc, char* argv[]){
    if (argc < 2) {
        fprintf(stderr, "imageStitching [./image path] [focal length path]\n");
        exit(0);
    }

    cv::Mat panorama;
    ImageStitcher imageStitcher = ImageStitcher(argv[1], argv[2]);
    imageStitcher.solve(panorama);
    cv::imwrite("./panorama.png", panorama);

    return 0;
}
