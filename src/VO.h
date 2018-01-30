#ifndef SIMPLEVO_VO_H
#define SIMPLEVO_VO_H

#include <unordered_map>

#include <opencv2/opencv.hpp>
#include <sophus/se3.hpp>

#include "MapPoint.h"
#include "Frame.h"

/*
  core of visual odometry
*/
class VO
{
public:
    VO() {}

public:
    Frame* lastFrame;
    Frame* thisFrame;

    cv::Mat lastLeftImg, lastRightImg;
    cv::Mat thisLeftImg, thisRightImg;

    std::unordered_map<unsigned int, Point3d> mapPoints;
    std::unordered_map<unsigned int, Frame> keyFrames;
    unsigned int mapPointsNum;
    unsigned int keyFramesNum;
};

#endif // SIMPLEVO_VO_H