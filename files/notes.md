batch script backup:

@echo off
set path="C:\Program Files\WinRAR\"
set dt=%date:~7,2%-%date:~4,2%-%date:~10,4%_%time:~0,2%_%time:~3,2%_%time:~6,2%

rar a -r "UORPG 4_15_%dt%.rar" "UORPG 4.15"


