# Introduction
- This is a tiny example of combining C++ code with Python and build with CMake, On C++ side, it currently only has 1 function `int add(int x, int y);` which is then wrapped to a python module using PyBind11, and can be imported by python using `import pyCPP`.
  
# Install
- First, clone the repo: `git clone https://github.com/bznick98/try-pyCPP.git`
- Go to root directory of try-pyCPP: `cd try-pyCPP`
#### On MacOS/Linux:
- Need to have `CMake` installed.
- Run `python3 setup.py develop --user`
#### On Windows:
- I installed Visual Studio 2019 with C++ extension, which includes CMake and some other necessary tools.
- Run `python3 setup.py develop --user`

# Potential Problems During Installation
- If no CMake was installed, install CMake: (Ubuntu) `sudo apt-get -y install cmake` (MacOS) `brew install cmake`
- If on *Ubuntu: Fatal error: Python.h: No such file or Directory*, then install python3-dev by running `apt-get install python3-dev`

# To Uninstall / Remove build:
- On MacOS/Linux: run `sh rmbuild.sh` or `python3 setup.py clean`
- On Windows: Haven't figured it out where the package was installed.

# Run
- After successful install, you should be able to `import pyCPP` just as using any other python modules.
- There is only 1 sample function `pyCPP.add(x,y)` which takes two int arguments and add them up.
