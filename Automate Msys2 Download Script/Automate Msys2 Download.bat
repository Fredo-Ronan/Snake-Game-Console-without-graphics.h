@echo off

if exist "%CD%\msys2_download_and_install.ps1" goto go
if not exist "%CD%\msys2_download_and_install.ps1" goto error

:go
powershell -ExecutionPolicy Bypass -File "%CD%\msys2_download_and_install.ps1"

:error
echo "                         [!] <<< WARNING >>> [!]"
echo " "
echo "  >> The msys2_download_and_install.ps1 file must be in the same directory as this batch file"
echo " "
echo "  >> Please move that file to this directory before continue...."
echo " "
echo " "
pause


Rem {IMPORTANT NOTES} :
Rem Please read the README.md file for the instruction of using this batch file to automate the download and installation
