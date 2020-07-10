# Introduction
- This is a tiny example of combining C++ code with Python and build with CMake, On C++ side, it currently only has 1 function `int add(int x, int y);` which is then wrapped to a python module using PyBind11, and can be imported by python using `import pyCPP`.
  
# Install
- First, clone the repo: `git clone https://github.com/bznick98/try-pyCPP.git`
- Go to root directory of try-pyCPP: `cd try-pyCPP`
#### On MacOS/Linux:
- Need to have `CMake` installed.
  - If `CMake` not installed:
    - MacOS: `brew install cmake`
    - Ubuntu: `sudo apt-get -y install cmake`
- Run `pip install .`, it will install in the global python environment.
#### On Windows:
- I installed Visual Studio 2019 with C++ extension, which includes CMake and some other necessary tools. (
- [ ] TODO: Figure out what exactly are needed to install in Windows.)
- Install the python module by
  - `python3 setup.py develop --user`
- Alternative Method (Cleaner):
    - Create a virtual environment by `python3 -m venv venv/`
    - Enter the virtual environment by `./venv/Scripts/Activate.ps1` 
    - If success, prompt will change starting with `(venv)`
    - Install pyCPP by `pip install .`
    - pyCPP should be able to import now.
    - Exit virtual environment by `deactivate` whenever done using the module.

# Potential Problems During Installation
- If no CMake was installed:
  - If `CMake` not installed:
    - MacOS: `brew install cmake`
    - Ubuntu: `sudo apt-get -y install cmake`
- If on *Ubuntu: Fatal error: Python.h: No such file or Directory*
  - Install python3-dev by running `apt-get install python3-dev`

# To Uninstall / Remove build:
- On MacOS/Linux: run `pip uninstall pyCPP` OR run `sh rmbuild.sh` if you used `python3 setup.py` to install.
- On Windows: Haven't figured it out where the package was installed.

# Run & Test
- After successful install, you should be able to `import pyCPP` just like using any other python modules.
- There is only 1 sample function `pyCPP.add(x,y)` which takes two int arguments and add them up.
