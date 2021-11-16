# Piscine C++

<img align="left" alt="C++" height="27" width="27" src="https://raw.githubusercontent.com/github/explore/180320cffc25f4ed1bbdfd33d4db3a66eeeeb358/topics/cpp/cpp.png" /><br />

Exercices to learn C++ OOP, divided in 9 modules :

- Module 0 : class, member functions, stdio stream, initilization lists, static and const.
- Module 1 : memory allocation, references, pointers to members, switch.
- Module 2 : polymorphism ad-hoc, overloads, canonical class.
- Module 3 : Inheritance.
- Module 4 : Subtype Polymorphism, abstract class, interfaces.
- Module 5 : not done yet
- Module 6 : not done yet
- Module 7 : not done yet
- Module 8 : not done yet

## Module 0

### Create a class

To create an *object*, you need to create a *class*. It's like drawing the plan of the object.

The object is an *instance* of the class, a concrete materialization of the class.

We create the class in a *.hpp* file (school norm). And we initialize it in a *.cpp*

```
class		className {
	attribute  member;
	function() member;
};
```

In a class, we can declare variables and functions that are *members* of the class.

### Access Rights

By default, class members are private, which means we *cannot* use them outside of the class functions. (In structures, it's public by dflt)

In this module we learn two accesses
- **private** : accessible only inside the class
- **public** : accessible inside and outside the class

### Constructor and Destructor

To initialize the attributes, we call the *constructor*. It is automatically called when we create a class-based object (an instance).

When we don't need the object anymore we destroy it with the *destructor*.

```
.HPP

class	Knight {
	private:
		int	_healthPoints;
	public:
		Knight();
		~Knight();
}
```

Here, the *constructor* is ```Knight()``` and the *destructor* is ```~Knight()``` (it doesn't need any parameters).
The destructor is useless if the program has no dynamic allocation.

### Initialization list

To initialize the ```_healthPoints``` of our knight, we go in the *constructor*.

```
.CPP

Knight::Knight() {
	_healthPoints = 100;
}

or, to use initialization list :

Knight::Knight() : _healthPoints(100) {

}
```

