# Adapter
- Adapter is a structural design pattern that allows objects with incompatible interfaces to collaborate.

# When to use
- The adapter gets an interface, compatible with one of the existing objects.
- Using this interface, the existing object can safely call the adapter’s methods.
- Upon receiving a call, the adapter passes the request to the second object, but in a format and order that the second object expects.
    
# Implementation
- Make sure that you have at least two classes with incompatible interfaces:
  - A useful service class, which you can’t change (often 3rd-party, legacy or with lots of existing dependencies).
  - One or several client classes that would benefit from using the service class.
- Declare the client interface and describe how clients communicate with the service.
- Create the adapter class and make it follow the client interface. Leave all the methods empty for now.
- Add a field to the adapter class to store a reference to the service object. The common practice is to initialize this field via the constructor, but sometimes it’s more convenient to pass it to the adapter when calling its methods.
- One by one, implement all methods of the client interface in the adapter class. The adapter should delegate most of the real work to the service object, handling only the interface or data format conversion.
- Clients should use the adapter via the client interface. This will let you change or extend the adapters without affecting the client code.

<!-- ![Alt text](/Builder/builder.jpg?raw=true "Optional Title") -->

# Pros and Cons
- ✔️ Single Responsibility Principle. You can separate the interface or data conversion code from the primary business logic of the program.
- ✔️ Open/Closed Principle. You can introduce new types of adapters into the program without breaking the existing client code, as long as they work with the adapters through the client interface.
- ❌  The overall complexity of the code increases because you need to introduce a set of new interfaces and classes. Sometimes it’s simpler just to change the service class so that it matches the rest of your code.
