# Introduction
- This is a tiny example of combining C++ code with Python and build with CMake, On C++ side, it currently only has 1 function `int add(int x, int y);` which is then wrapped to a python module using PyBind11, and can be imported by python using `import pyCPP`.
  
# Install
- First, clone the repo: `git clone https://github.com/bznick98/try-pyCPP.git`
- Go to root directory of try-pyCPP: `cd try-pyCPP`
#### On MacOS/Ubuntu:
- Need to have `CMake` installed.
  - If `CMake` not installed:
    - MacOS: `brew install cmake`
    - Ubuntu: `sudo apt-get -y install cmake`
- Run `pip install .` Under the directory `try-pyCPP/`
- Done and ready to be imported. (It will install in the global python environment)
#### On Windows:
- [ ] TODO: Figure out what exactly are needed to install in Windows.
- I installed Visual Studio 2019 with C++ extension, which includes CMake and some other necessary tools. 
- Install the python module by
  - `python3 setup.py develop --user`
  - Done if no error occurs, ready to be imported.
- Alternative Method (Cleaner):
    - Create a virtual environment by `python3 -m venv venv/`
    - Enter the virtual environment by `./venv/Scripts/Activate.ps1` 
    - If success, prompt will change starting with `(venv)`
    - Install pyCPP by `pip install .`
    - Done and pyCPP should be able to import now.
    - Exit virtual environment by `deactivate` whenever done using the module.

# Potential Problems During Installation
- If `CMake` not installed:
  - MacOS: `brew install cmake`
  - Ubuntu: `sudo apt-get -y install cmake`
- If on *Ubuntu: Fatal error: Python.h: No such file or Directory*
  - Install python3-dev by running `apt-get install python3-dev`

# Run & Test
- After successful install, you should be able to `import pyCPP` just like using any other python modules.
- There is only 1 sample function `pyCPP.add(x,y)` which takes two int arguments and add them up.
- Example Use:
  ```
  import pyCPP
  pyCPP.add(20,30)
  ```
  - The program should print out a statement and a result.

# To Uninstall / Remove Package:
- On MacOS/Linux: 
  - run `pip uninstall pyCPP` 
  - OR run `sh rmbuild.sh` if you used `python3 setup.py` to install.
- On Windows: Haven't figured it out where the package was installed.

# The installation has tested on:
- [x]  `MacOS 10.15.5`
- [x]  `Ubuntu 16.04`
- [x]  `Windows 10`