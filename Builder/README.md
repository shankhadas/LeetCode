# Builder
- Builder is a creational design pattern that lets you construct complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.
- Create an object with composing other complex objects. And when there's dependency between all those complex objects then we need Builder Design pattern. (Director will hanlde the steps to create those)

# When to use
- Use the Builder pattern to get rid of a “telescoping constructor”.
- Use the Builder pattern when you want your code to be able to create different representations of some product (for example, stone and wooden houses).
- Use the Builder to construct Composite trees or other complex objects.
    
# Implementation
- Make sure that you can clearly define the common construction steps for building all available product representations. Otherwise, you won’t be able to proceed with implementing the pattern.
- Declare these steps in the base builder interface.
- Create a concrete builder class for each of the product representations and implement their construction steps.
- Think about creating a director class. It may encapsulate various ways to construct a product using the same builder object.
- The client code creates both the builder and the director objects. Before construction starts, the client must pass a builder object to the director. Usually, the client does this only once, via parameters of the director’s class constructor. The director uses the builder object in all further construction. There’s an alternative approach, where the builder is passed to a specific product construction method of the director.
- The construction result can be obtained directly from the director only if all products follow the same interface. Otherwise, the client should fetch the result from the builder.

![Alt text](/Builder/builder.jpg?raw=true "Optional Title")

# Pros and Cons
- ✔️ You can construct objects step-by-step, defer construction steps or run steps recursively.
- ✔️ You can reuse the same construction code when building various representations of products.
- ✔️ Single Responsibility Principle. You can isolate complex construction code from the business logic of the product.
- ❌  The overall complexity of the code increases since the pattern requires creating multiple new classes.
