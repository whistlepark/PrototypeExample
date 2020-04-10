# Prototype Design Method
Use this pattern when a system should be independent of how its products are created, composed, and represented.

## Basics
Prototype Design is a creational pattern that allows for abstracting away 
from the client the intricacies of how certain classes interact with others by using
a prototype of that class and copying that prototype.

`C++ provides a copy constructor but this does not solve the "shallow vs deep copy" problem.`

Designs that make use of the Prototype design method include Composite and Decorator patterns.

## Applications

From page 118:

> - when classes instantiated are at run-time, such as dynamic loading
> - to avoid building a class hierarchy of factories that parallels class
> hierarchy of products
> - when instances of a class have only a few different states, may be easier to clone
> than instantiate each class 

## Resources
Design Patterns: Elements of Reusable Object-Oriented Software

Pages: 117 - 126

Sample Code: 122-125
### Citations
> Gamma, E., Helm, R., Johnson, R. E., & Vlissides, J. (2015). Design patterns: elements of reusable object-oriented software.

####  Github
https://github.com/whistlepark/PrototypeExample.git

#### Clion Tutorial
https://www.youtube.com/watch?v=Srnw1dI1iAA