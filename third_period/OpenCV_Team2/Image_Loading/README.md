# *opencv-rueppelli-2*
<p>made by Andrea Rapp, Fanni Takacs, Mark Toth and Zsuzsanna Franko</p>

 This is a software being developed by students of **GFA** in the project phase. 

 It is written in *C++* and uses the *openCV* library for picture processing.
 
 It can detect circles on any given picture, we also get the area and the coordinates of the circles.
 We can modify the picture with gaussian or median blur for more accurate detection.
 
 ![Alt Text](img/featuresguide01.jpg)
 
 
 The number of circles detected on a picture and the time in which it was processed are saved into an *SQLite* database.
 
  ![Alt Text](img/featuresguide02.jpg)
 
 
 It has a few sorting functions based on sorting algorithms. Their usage is still being developed.
 
 We unit test the software with *googletest*.

*Our aim is to increase accuracy of image detection and to add useful features during the development.*

 INSTALLATION AND SETUP

 Requirements

⋅⋅*JetBrainsCLion
⋅⋅*Open CV library
⋅⋅*SQLite
⋅⋅*Google Test

 Installation

First of all you will need to download:

<li> <a href="https://cmake.org/download/" rel="nofollow">CMake</a></li>
<li> <a href="https://dev.mysql.com/downloads/mysql/" rel="nofollow">MySQL Community Server</a></li>
<li> <a href="https://cmake.org/download/" rel="nofollow">Open CV library</a></li>
<li> <a href="https://github.com/green-fox-academy/teaching-materials/blob/master/workshop/testing/env-setup/cpp/resource/googletest.zip" rel="nofollow">Google Test</a></li>


