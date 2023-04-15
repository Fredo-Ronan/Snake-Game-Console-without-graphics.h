$URL="https://github.com/msys2/msys2-installer/releases/download/2023-03-18/msys2-x86_64-20230318.exe"
$PathDownload=(New-Object -ComObject Shell.Application).NameSpace('shell:Downloads').Self.Path
$NameFile="\msys2-x86_64-20230318.exe"
$Path=$PathDownload+$NameFile

Start-BitsTransfer -Source $URL -Destination $Path

write-output "Starting the GCC Installer....."
timeout /t 10 /nobreak

cd $PathDownload
./msys2-x86_64-20230318