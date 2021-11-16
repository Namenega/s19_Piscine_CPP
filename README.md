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

---

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

Knight::Knight() : _healthPoints(100), other variables {

}
```


### Accessors and Mutators

Since we cannot use private members outside of the class, but sometimes needs it anyway, we use *accessor* (aka getter) and *mutator* (aka setter), to *get* and *set*
values.

- *accessor* is a member function used to retrieve the data of protected members.
- *mutator* is a member function used to edit/set the data of protected members.

```
.HPP

class	Knight {
	private:
		std::string	_name;
		int			_healthPoints;
	public:
		Knight();
		~Knight();

		std::string	getName() const;
		void		setName(std::string newName);
};

----

.CPP

std::string	Knight::getName() const {
	return (_name);
}

void		Knight::setName(std::string newName) {
	_name = newName;
}
```

The accessor is a **const**, because its job is to return the value of the private members without modify it.


---

## Module 1

### Memory allocation

To allocate memory in C++, we currently have to option :

- *malloc()* and *free()*
- *new* and *delete*

Yet through the modules, malloc and free functions are forbidden. So we need to learn *new* and *delete*.

Any differences? Yep :

**new/delete vs malloc/free**

```
memory allocated from	 : Free store			/	Heap
Returns			 : Fully Typed pointer		/	void*
On Failure		 : Throws error			/	returns NULL
Required Size	 	: Calc. by compiler		/	must be specified in bytes
Handling arrays		 : Has explicit version		/	manual calc.
Reallocating		 : Not handled			/	Simple (no cpy constructor)
Overridable		 : Yes				/	No
Use of Construct/Destruct: Yes				/	No
```
