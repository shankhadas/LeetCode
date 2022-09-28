# Observer
- Defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
- Observer is a behavioral design pattern that lets you define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing.
```
  Subject

  int position;
  list observers;

  setPosition(value){
    position = value;
    notify();
  }

  norify(){
    call all observers
  }
```

# When to use
- Use the Observer pattern when changes to the state of one object may require changing other objects, and the actual set of objects is unknown beforehand or changes dynamically.
- Use the pattern when some objects in your app must observe others, but only for a limited time or in specific cases.
    
# Implementation

![Alt text](/Observer/observer.png?raw=true "Optional Title")

# Pros and Cons
- ✔️ Open/Closed Principle. You can introduce new subscriber classes without having to change the publisher’s code (and vice versa if there’s a publisher interface).
- ✔️ You can establish relations between objects at runtime.
- ❌  Subscribers are notified in random order.