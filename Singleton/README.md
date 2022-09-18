# Singleton
- Define a class that has only one instance and provides a global point of access that instance.

# Requirements
- One and only instance.
- Global access.
- No ownership : no one would be owner of that object, it would be freely floating here and there. Anyone want that object they'll just use it.
- Lazy initialization.

# Advantages
- **Save memory:** only one is required so why to create so many?
- **Single Access Point:** Logger, Database connection etc.
- **Flexibility:** change anytime you want to.
**PS:** it's a replacement of GLOBAL variable.

# When to use
- Multithreaded: threadpool
- Database connection: Logging
- Configuration settings: game setting, application setting etc.
-  Use the Singleton pattern when a class in your program should have just a single instance available to all clients; for example, a single database object shared by different parts of the program.
-  Use the Singleton pattern when you need stricter control over global variables.
    
# Implementation
To create Singleton class we must have:
- static member
- private constructor
- static function

![Alt text](/Singleton/singleton.png?raw=true "Optional Title")

# Pros and Cons
- ✔️ You can be sure that a class has only a single instance.
- ✔️ You gain a global access point to that instance.
- ✔️ The singleton object is initialized only when it’s requested for the first time.
- ❌  Violates the Single Responsibility Principle. The pattern solves two problems at the time.
- ❌  The Singleton pattern can mask bad design, for instance, when the components of the program know too much about each other.
- ❌  The pattern requires special treatment in a multithreaded environment so that multiple threads won’t create a singleton object several times.
- ❌  It may be difficult to unit test the client code of the Singleton because many test frameworks rely on inheritance when producing mock objects. Since the constructor of the singleton class is private and overriding static methods is impossible in most languages, you will need to think of a creative way to mock the singleton. Or just don’t write the tests. Or don’t use the Singleton pattern.