@echo off
title compare
color 0a
g++ gen.cpp -o code.exe
code.exe > input.txt
g++ sol.cpp -o code1.exe
code1.exe < input.txt > output.txt
g++ brute.cpp -o code2.exe
code2.exe < input.txt > output1.txt
fc output.txt output1.txt
if errorlevel 1 input.txt exit
test