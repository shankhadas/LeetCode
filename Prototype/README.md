# Prototype
- Prototype is a creational design pattern that lets you copy existing objects without making your code dependent on their classes.
- An object that supports cloning is called a prototype.

# Requirements
- Creating an object is expensive than copying an object.
- All objects ***Initial State*** is common and takes time to build.
- Composition, creation and representation of object should be decoupled from the system.
- Hide the complexity of creating new instance from the user.
- Which classes to create are specified at runtime.

# Disadvantages
- Copy!!!: [shallow/deep]
- Copying an object can be complicated.
- Circular references class can't be cloned.
- Over use of this might affect the performance.

# When to use
- Use the Prototype pattern when your code shouldn’t depend on the concrete classes of objects that you need to copy.
- Use the pattern when you want to reduce the number of subclasses that only differ in the way they initialize their respective objects.
    
# Implementation
- Create the prototype interface and declare the ***clone*** method in it. Or just add the method to all classes of an existing class hierarchy, if you have one.
- A prototype class must define the alternative constructor that accepts an object of that class as an argument. The constructor must copy the values of all fields defined in the class from the passed object into the newly created instance. If you’re changing a subclass, you must call the parent constructor to let the superclass handle the cloning of its private fields.

![Alt text](/Prototype/prototype.png?raw=true "Optional Title")

# Pros and Cons
- ✔️ You can clone objects without coupling to their concrete classes.
- ✔️ You can get rid of repeated initialization code in favor of cloning pre-built prototypes.
- ✔️ You can produce complex objects more conveniently.
- ✔️ You get an alternative to inheritance when dealing with configuration presets for complex objects.
- ❌  Cloning complex objects that have circular references might be very tricky.
