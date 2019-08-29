#ifndef __LANEPROCESS_H__
#define __LANEPROCESS_H__
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <fstream>
#include <glog/logging.h>

using namespace std; 
using namespace cv; 

class CLaneProcess
{
public: 
    CLaneProcess(void);
    ~CLaneProcess(void);
public: 
    /*---------------------------------
    @author: liuyusen
    @date  : 2019-08-29
    @func  : get file lists via command
    @input : string- command
    @output: bool-   result 
    //---------------------------------*/
    bool GetformatList(std::string &cmd); 
    /*---------------------------------
    @author: liuyusen
    @date  : 2019-08-29
    @func  : get outline points via segmentation
    @input : Mat-    gray image
             int-    classes of the target 1:lane
             vector- outline points of the target
    @output: bool- result 
    //---------------------------------*/
    bool GetImagePoint(const cv::Mat matImageIn, int label , vector<vector<cv::Point>> &vecPoints);
    
public: 
    std::vector<std::string> fileList; 
    
}; 
    /*---------------------------------
    @author: liuyusen
    @date  : 2019-08-29
    @func  : main function 
    @input : string-   ls command
             string-   path for saving
    @output: bool-     result 
    //---------------------------------*/
bool run(const string Cmd, string Path_save);

#endif 
