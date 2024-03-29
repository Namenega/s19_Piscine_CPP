# Piscine C++

<img align="left" alt="C++" height="27" width="27" src="https://raw.githubusercontent.com/github/explore/180320cffc25f4ed1bbdfd33d4db3a66eeeeb358/topics/cpp/cpp.png" /><br />

Exercices to learn C++ OOP, divided in 9 modules :

- [x] Module 0 : class, member functions, stdio stream, initilization lists, static and const.
- [x] Module 1 : memory allocation, references, pointers to members, switch.
- [x] Module 2 : polymorphism ad-hoc, overloads, canonical class.
- [x] Module 3 : Inheritance.
- [x] Module 4 : Subtype Polymorphism, abstract class, interfaces.
- [ ] Module 5 : Exceptions
- [ ] Module 6 : not done yet
- [ ] Module 7 : not done yet
- [ ] Module 8 : not done yet

---

## Module 0

### Stdio Stream

```
#include <iostream>

int main(void) {
	std::string myName = "namenega";
	std::string yourName;

	std::cout << "My name is " << namenega << std::endl;

	std::cin >> yourName;
	std::cout << "Your name is " << yourName << std::endl;
}
```

Let's describe everything we saw here :

- ```#include <iostream>``` is preprocessor instruction.
- ```std::cout``` opens an output stream on the console in which we will send the next part.
  - *std* means that we use the standard library space.
  - *cout* means ```console out```
- ```<<``` redirects the stream in the standard output.
- ```std::endl``` is a simple ```\n``` but is already formatted for any OS.
- ```std::cin >>``` works the same as ```cout``` but for in/input



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
memory allocated from	 : Free store		|	Heap
Returns			 : Fully Typed pointer	|	void*
On Failure		 : Throws error		|	returns NULL
Required Size		 : Calc. by compiler	|	must be specified in bytes
Handling arrays		 : Has explicit version	|	manual calc.
Reallocating		 : Not handled		|	Simple (no cpy constructor)
Overridable		 : Yes			|	No
Use of Construct/Destruct: Yes			|	No
```

Also, the *new* operator allocates memory **then** calls the constructor. Same goes with *delete* that calls the destructor then deallocates the memory.

To use it :

```
//we use here the same class as the 'accessors and mutators' chapter.

#include "Knight.hpp

int main(void) {
	Knight* knightOne = new Knight();
	...
	delete knightOne;
}

```

To allocate an array with *new* and *delete*, there's a special syntax :

```
//we use here the same class as the 'accessors and mutators' chapter.

#include "Knight.hpp

int main(void) {
	int	N = 5;
	Knight* knightOne = new Knight[N];
	...
	delete [] knightOne;
}
```


### Pointers and References

```
std::string		str = "Hello World!";
std::string*	strPtr = &str;
std::string&	strRef = str;
```

Here we got respectively :

- a string
- a ```pointer``` initialized on the 'str' address
- a ```reference``` that points on 'str'

We already what a pointer is, so let's explain the *reference* :

The *reference* is type of variable. We have to assign a variable at initialization because it cannot point on nothing. At this moment, we cannot change on what the reference points (it is like a const pointer). The *reference* is an always-dereferenced pointer.

So the *pointer* is a variable that holds the memory address of another variable and a *reference* is an alias for an already existing variable.

*Pointer* vs *Reference*

```
A pointer can be initialized to any value	|	A reference must be initialized
anytime after it is declared.			|	when it is declared.
						|
A pointer can be assigned to point to a		|	References cannot be NULL.
NULL value.					|
						|
Pointers need to be dereferenced with a *.	|	References can be used symply by name.
						|
A pointer can be changed to point to any	|	Once a reference is initialized to a
variable of the same type.			|	variable, it cannot be changed to
						|	a variable object.
```

---

## Module 2

### Canonical Class

From now and to the end, we need to make and use canonical class.
It is simply an way to enforce *consistency* while creating classes.

Class needs :
- A **constructor**
- A **copy constructor**
- A **destructor**
- A **copy assignement operator**

In practice :

```
.HPP

class	Knight {
	private:
		int _healthPoints;
	public:
		Knight();				//Default Constructor
		Knight(const Knight & copy);		//Copy Constructor
		~Knight();				//Destructor

		//Copy assignement operator
		Knight &	operator=(Knight const & operEqual);
};

-----------

.CPP

#include "Knight.hpp"

//Default Constructor
Knight::Knight() {
	std::cout << "Default Knight Constructor is called." << std::endl; 
}

//Copy Constructor
Knight::Knight(const Knight & cpy) {
	std::cout << "Knight Constructor copy is called." << std::endl;
	*this = cpy;
}

//Copy assignement operator
Knight &		Knight::operator=(Knight const & operEqual) {
	std::cout << "--- Printing operator= ---" << std::endl;
	if (this != &operEqual)
		this = operEqual;
	return (*this);
}

//Destructor
Knight::~Knight() {
	std::cout << "Knight Destructor is called." << std::endl;
}
```


### Overload

C++ allows to specify more than one definition for a function and operator. It means we can have many functions with the same name, except that they need to have a different number &&|| type of arguments.
The automatical process of selecting the most appropriate overload function is called *overload resolution*.

```
class	Knight {
	private:
		int _healthPoints;
	public:
		Knight();
		Knight(std::string newName);
		Knight(int amountDamageTaken);
		Knight(std::string newName, int baseAttack);
		~Knight();
};
```

Above we have 4 Knight() function, where only arguments change.
It works the same way with operator.

```
class	Knight {
	public:
		Knight &			operator=(Knight const & rhs);

		/* Comparison */
		bool			operator>(Knight const & x) const;
		bool			operator<(Knight const & x) const;
		bool			operator>=(Knight const & x) const;
		bool			operator<=(Knight const & x) const;
		bool			operator==(Knight const & x) const;
		bool			operator!=(Knight const & x) const;

		/* Arithmetic */
		Knight			operator+(Knight const & x) const;
		Knight			operator-(Knight const & x) const;
		Knight			operator*(Knight const & x) const;
		Knight			operator/(Knight const & x) const;

		/* Increment */
		Knight &		operator++();			//++i
		Knight &		operator--();			//--i
		Knight			operator++(int);		//i++
		Knight			operator--(int);		//i--
};
```

---

## Module 3

### Inheritance

The inheritance of a class is the capability to derive properties from another class.
It means that a class can inherit members from another one.
>For example : I have a class Character, and each character has two_legs. My class Knight will inherit the two_legs member of Character class.

From there we can say that there are two type of classes:

- Sub Class / Derived Class : that inherits properties from another class.
- Super Class / Base Class : whose properties are inherited by subclass.

```
class	Character {
	public:
		void	walk() const;
		void	talk() const;
};

class	Knight : public Character {
	public:
		void	defend() const;
};

class	Robber : public Character {
	public:
		void	steal() const;
};
```

Here above ```Knight``` class and ```Robber``` class inherit properties from ```Character``` class because we admit they can both walk and talk too.
We use a public inheritance, but the access mode can be different : public, private, protected.

There are multiple kinds of inheritance :

- Multiple inheritance : where the subclass inherits from two or more classes.
- Multilevel inheritance : where the subclass inherits from a class that also inherits from another class.
- Hierarchical inheritance : where more than one subclass is inherited from single base class.
- Hybrid (virtual) inheritance : that combined more than one type of inheritance.
- Diamond Problem : where two superclass have a common base class. (Which way??)

This [topic](https://www.geeksforgeeks.org/inheritance-in-c/) should help.

This *Diamond problem* leads us to a new keyword : *virtual*

It will guarantee that only a single instance of the inherited class is passed on.

```
class	Parent {
	public:
		void	isHuman();
};

class	Father : virtual public Parent {
	public:
		void	brownHair();
};

class	Mother : virtual public Parent {
	public:
		void	brownEyes();
};

class	Child : public Father, public Mother {
	...
}
```

The *Child* class will have a single instance of the *Parent* class, shared by both *Father* and *Mother*. Also, we cannot access *private* members in a sub-sub-class from a base class. Here comes the access mode ```protected``` which allows the use of protected members inside the inheritance classes but not outside those.

---

## Module 4

### Subtype polymorphism, Abstract classes & Interface

What is *Polymorphism* ? In programming, polymorphism refers to the ability of a piece of code to behave differently depending on the context in which it is used. There are several forms of polymorphism :

- *ad hoc polymorphism*, which refers to function overloading (see 2nd Module)
- *parametric polymorphism*, in the form of templates
- *subtype polymorphism*, wich allows a derived-class to be used where a base-class object is expected

In this Module, we will see the 3rd form : *subtype polymophism*.

```
class Pokemon {
	public:
		Pokemon(){};
		~Pokemon(){};
		void	attack() {
			std::cout << "Pokemon attacks." << std::endl;
		};
}

class Charmander : public Pokemon {
	public:
		Charmander(){};
		~Charmander(){};
		void	attack() {
			std::cout << "Charmander attacks." << std::endl;
		};
}

int main() {
	Pokemon *		a = new Charmander();

	a->attack();
	delete a;
	return (0);
}
```

In this situation, the output will be :
>Pokemon attacks.

But since we have *new Charmander()*, we wanted Charmander to attack. To fix this,
we will use the same key word as seen in the previous Module : **virtual** so Charmander can attack.

```
class Pokemon {
	public:
		Pokemon(){};
		~Pokemon(){};
		virtual void	attack() {
			std::cout << "Pokemon attacks." << std::endl;
		};
}

class Charmander : public Pokemon {
	public:
		Charmander(){};
		~Charmander(){};
		virtual void	attack() {
			std::cout << "Charmander attacks." << std::endl;
		};
}

int main() {
	Pokemon *		a = new Charmander();

	a->attack();
	delete a;
	return (0);
}
```

The output will now return an error. Indeed, we also need to make our destructor *virtual*! We just made a *virtual function*.

What now, if we do not need our Pokemon to attack but Charmander yes? Every Pokemon can attack but 'Pokemon' itself do not need to.

```
class Pokemon {
	public:
		Pokemon(){};
		virtual ~Pokemon(){};
		virtual void	attack() = 0;
}

class Charmander : public Pokemon {
	public:
		Charmander(){};
		~Charmander(){};
		void	attack() {
			std::cout << "Charmander attacks." << std::endl;
		};
}

int main() {
	Pokemon *		a = new Charmander();

	a->attack();
	delete a;
	return (0);
}
```

Here we set the *attack()* function to equal 0. From this moment, the virtual function *attack()* becomes a pure virtual function. And the class is now an *Abstract class*.

A class is made *abstract* by declaring at least one its functions as *pure virtual* (specified by placing the "= 0"). The purpose of an *abstract class* is to provide an appropriate base class from which other classes inherit.
Now, an *Interface* is an abstract class made with **only** pure virtual functions. It is used to provide/force Obj. Oriented System a common and standardized appopriate interface.

---

## Module 5

### Exceptions

Different errors can occur when executing a program : made by programmer, wring input, ... Here we will learn to throw an exception when it happens.

There are 3 new key words :
- *try*, allows to define a block of code to be tested for errors while being executed.
- *throw*, throws an exception when a problem is detected, which let us create a custom error.
- *catch*, allows to define a block of code to be executed, if an error occurs in the *try* block.

```
try {
	int age = 15;
	if (age >= 18) {
		std::cout << "Access granted - you are old enough.";
	} else {
		throw (age);
	}
}
catch (int myNum) {
	cout << "Access denied - You must be at least 18 years old.\n";
	cout << "Age is: " << myNum;
}
```



