# Functionlities and Use Cases
- Firstly user should be able to easily **import** the library by 
```python
import XXXX
```
# Model
## Definition 
- The first step would be declaring a **model**? 
```python
# create a empty model
vehicle = Model()
```
- Possible ways to define a model:
  - Use a simple GUI(as a separate module/tool) to manually input model dynamics and output to a specific format.
  - Import from existing file, such as:
    -  From hyxml format. 
    -  From some other popular model format?
  ```python
  # it will construct the model from file specified by "filename"
  vehicle.read("filename")
  ```
    
- After we have a model with defined ***Initial Set, Unsafe Set, etc.*** We can perform **simulation/reachability analysis** based on the model.

## Data Types
```python
SetOfEquations dynamics_of_model # The differential equations, represented by some data structrues?
int Dimension # the number of variables
```

## Operations
### Simulation
- Perform simulate() from model, with **Initial Set** and **Time Horizon** input.
```python
'''
INPUT:
    init_set - model's initial set
    T        - Time Horizon
    t        - Time Step
OUTPUT:
    Simulation_Trace  
    (Might be a data type or just a subset of reachtube)    
''' 
vehicle.simulate(init_set, T, t) 
```

### Verification
- Perform reach() from model, with **Initial Set** and **Time Horizon** input.
```python
'''
INPUT:
    init_set - model's initial set
    T        - Time Horizon
    t        - Time Step
OUTPUT:
    Reachtube   
''' 
vehicle.reach(init_set, T, t)
```


# Set
- Is an abstract class.
- Subclass can be:
  - RectangleSet
  - LinearSet
  - ...


# ReachTube
- Is a class.
- 



