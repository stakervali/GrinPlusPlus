## Build Instructions

### Windows
#### Prerequisites
* CMake 3.8+
* Visual Studio 2017+ 64-bit with C++ 2017 Support
* OPTIONAL: Visual C++ Tools for CMake

**With Visual C++ Tools for CMake**
1. Clone `https://github.com/GrinPlusPlus/GrinPlusPlus.git` to location of your choice
2. Open Visual Studio
3. File>Open>CMake...
4. Choose CMakeLists.txt from GrinPlusPlus folder
5. Choose x64-Debug or x64-Release from build configurations drop-down
6. Generate CMake Cache and Build All from the CMake menu

**Command Line**:
1. ```Open "Developer Command Prompt for Visual Studio 2017"```
2. ```cd C:/Choose/A/Path```
3. ```git clone https://github.com/GrinPlusPlus/GrinPlusPlus.git```
4. ```cd GrinPlusPlus```
5. ```mkdir build & cd build```
6. ```cmake ..```
7. ```cmake --build .```

Once your code is built, you can just open GrinNode.exe from your bin folder.

### Linux/Mac
#### Prerequisites
* CMake 3.8+
* gcc 7.x.x (Tested on gcc 7.4.0)
* uuid-dev

1. ```git clone https://github.com/GrinPlusPlus/GrinPlusPlus.git```
2. ```cd GrinPlusPlus```
3. ```mkdir build```
4. ```cd build```
5. ```cmake ..```
6. ```cmake --build .```


### Visual Studio 2022

#### Additonal Instructions

- vcpkg install --triplet x64-windows-static --overlay-triplets=H:/Github/stakervali/GrinPlusPlus/vcpkg/custom_triplets --overlay-ports=H:/Github/stakervali/GrinPlusPlus/vcpkg/custom_ports
- cmake .. -DCMAKE_BUILD_TYPE=Debug -DGRINPP_TESTS=ON -DVCPKG_TARGET_TRIPLET=x64-windows-static -DVCPKG_OVERLAY_TRIPLETS=H:/Github/stakervali/GrinPlusPlus/vcpkg/custom_triplets -DVCPKG_OVERLAY_PORTS=H:/Github/stakervali/GrinPlusPlus/vcpkg/custom_ports -DCMAKE_MSVC_RUNTIME_LIBRARY=MultiThreadedDebug  -DCMAKE_PREFIX_PATH=H:/Github/stakervali/GrinPlusPlus/vcpkg_installed/x64-windows-static
- add compiler option /wd4996 to project Common
- add compiler option /wd4828 to project PoW
- 