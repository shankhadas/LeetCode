# Abstract Factory
- Defines an abstract class for creating ***families of related objects*** but without specifying their concrete sub-class.

# When to use
- You need system to be independent of how objects are created, composed and represented.
- Show interfaces not implementation.
- System need to be configured with one of the multiple family of object.
- Use the Abstract Factory when your code needs to work with various families of related products, but you don’t want it to depend on the concrete classes of those products—they might be unknown beforehand or you simply want to allow for future extensibility.
    
# Implementation
Define an abstract class for creating families(objects) of related object without concrete sub-class.

![Alt text](/Abstract%20Factory/abstract_factory.png?raw=true "Optional Title")

# Pros and Cons
- ✔️ You can be sure that the products you’re getting from a factory are compatible with each other.
- ✔️ You avoid tight coupling between concrete sub-class and client code.
- ✔️ Single Responsibility Principle. Each module written for single purpose and also extensible.
- ✔️ Open/Closed Principle. You can introduce new variants of similar objects without breaking existing client code. 
- ❌  The code may become more complicated than it should be, since a lot of new interfaces and classes are introduced along with the pattern.