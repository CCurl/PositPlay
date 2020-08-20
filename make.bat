@echo off

if "--%1%--" == "--pp--" goto make-pp
goto unknown

:make-pp
set output=pp
set c-files=main.c
set c-files=%c-files% posit.c
echo making %output% ...
echo gcc -g -o %output% %c-files%
gcc -g -o %output% %c-files%
if "--%2%--" == "--1--" pp
goto done


:unknown
echo Unknown make. I know how to make these:
echo.
echo    pp - makes pp.exe
echo.
echo    NOTE: if arg2 is given it then runs the program

:done
