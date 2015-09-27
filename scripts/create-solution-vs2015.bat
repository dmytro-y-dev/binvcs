@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" x86

cd ..
cmake -H. -Bbuild -G "Visual Studio 14" -DCMAKE_INSTALL_PREFIX:PATH=../

REM cd build
REM msbuild binvcs.sln /p:Configuration=Debug
REM msbuild INSTALL.vcxproj /p:Configuration=Debug

REM msbuild binvcs.sln /p:Configuration=Release
REM msbuild INSTALL.vcxproj /p:Configuration=Release
REM cd ..

cd scripts

