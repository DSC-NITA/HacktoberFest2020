import cv2 as cv
import numpy as np
from matplotlib import pyplot as plt
img = cv.imread("image.jpg", 0)
equ = cv.equalizeHist(img) 
res = np.hstack((img, equ))

print("Histogram of input image")
plt.hist(img.ravel(),256,[0,256])
plt.show();

print("Histogram of output image")
plt.hist(equ.ravel(),256,[0,256])
plt.show();

print("Histogram of input and output image")
plt.hist(res.ravel(),256,[0,256])
plt.show();

cv.imwrite("equ.png", equ)
cv.imwrite("res.png", res)
