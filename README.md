## XVInput
The library is a single header input wrapper supporting Keyboard and Input and is designed to wrap over your platform's input detection.

Generally, major game engine like Unity(New Input System) and Unreal(Enhanced Input) has this type of functionality, but this is my take on the implementation that is geared to pair with an Entity Component System (ECS).

## Functionality
- Event-based input binding, create an input action and bind it to a key to be fired.
- Component-based input mapping, create a list of input actions and bindings and store them in a map that can be attached to objects to extend input functionality.
- Input modifier to specialise how the input should be interpreted.


