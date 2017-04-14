# lab3
For question A: utilize makefile to compile lab3A.cpp
 
For question B: By approximated estimation,sort() is roughly nlogn,while insert_sort is about n to the power of two.The followering are some instances showing the time  difference between  two way of sorting.We can find that "sort()" is much faster than "insert_sort",and the ratio of two sorting way is not far than we estimate and expect.

when the size=1000
sort(): 0.000148 seconds
v1 and v2 are different.
insertion_sort(): 0.007407 seconds
v1 and v2 are the same.
(n*n)/nlogn=333.333
0.007407/0.000148=50.04

when the size=10000
sort(): 0.002004  seconds
v1 and v2 are different.
insertion_sort(): 0.758066 seconds
v1 and v2 are the same.
(n*n)/nlogn=2500
0.758066/0.002004=379

when the size=100000
sort(): 0.026113 seconds
v1 and v2 are different.
insertion_sort(): 75.692 seconds
v1 and v2 are the same.
(n*n)/nlogn=20000
75.692/0.026113=2898.632

when the size=1000000
sort(): 0.296223 seconds
v1 and v2 are different.
insertion_sort(): 7864.5 seconds
v1 and v2 are the same.
(n*n)/nlogn=166600
7864.5/0.296223=26549.2551

