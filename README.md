# On MacOS/Linux:
- Need to have `CMake` installed
- Run `python3 setup.py develop --user`

# On Windows:
- I installed Visual Studio 2019 with C++ extension, which includes CMake and some other necessary tools
- Run `python3 setup.py develop --user`

# To uninstall:
- On MacOS/Linux: run `sh rmbuild.sh` or `python3 setup.py clean`
- On Windows: Haven't figured it out where the package was installed.

# FAQ
- if No CMake was installed, install CMake: (Ubuntu) `sudo apt-get -y install cmake` (MacOS) `brew install cmake`
- If on *Ubuntu: Fatal error: Python.h: No such file or Directory*, then install python3-dev by running `apt-get install python3-dev`