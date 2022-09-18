# Factory Method
- It creates object for you rather you initiate object directly.
- Factory Design Pattern also know as "Virtual Constructor".
  - C++ doesn't support Virtual Constructor because 
    - to call a virtual function an object is required, on that object only virtual function can be called.
    - if you want constructor as virtual then you need an object to call constructor but we don't have that.
    
# Implementation
Define an interface or an abstract class for creating object but let the subclass decide which class to initiate.
![Alt text](/Factory\ Method/FactoryMethod.png?raw=true "Optional Title")

# Pros and Cons
✔️ You avoid tight coupling between the creator and the concrete products.
✔️ Single Responsibility Principle. Codes are distributed bades on their functionalities.
✔️ Open/Closed Principle. We can introduce new types of toy category into the program without breaking existing client code.
❌  The code may become more complicated since you need to introduce a lot of new subclasses to implement the pattern.
❌  The best case scenario is when you’re introducing the pattern into an existing hierarchy of creator classes.