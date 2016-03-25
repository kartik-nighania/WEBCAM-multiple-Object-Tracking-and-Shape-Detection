#multiple-Object-Tracking-with-coordinates-finding-and-shape-detection
objective is to make a complete autonomous robot that can
avoid obstacles and find path from images provided by webcam of the arena using OpenCV library of Computer Vision 

the code posted here can-

  show threshold image which were made wa made by
                                                -using HSV filter obtained by user from trackbars
                                                -creating a filtered image by using inrange function
                                                -using morphological operations like erode and dilate to reduce noise
                                                -finding contours using opencv 
                                                -use moments method to find area of tracked contours
                                                -find the cordinates of countours and limiting the trackcarea and number
                                                -using draw function show their cordinates and display boundaries
                                                

this new image will now track multiple objects of different shapes and will serve as an input to a* algorithm
which will be used for path detection.
once path is detected - serial communication through bluetooth will be send to the bot to toggle the motor driver IC 
and move the bot as per the path detected
                                          -Kartik Nighania

image detecting triangles and finding their coordinates in arena
http://i63.tinypic.com/1z5t6vp.png
