# Exception is BAD
###### <sub><sup>(OPINION, not fact)</sup></sub>
Why
- Breaks the natural flow of your code\
This introduced huge complexity, when I read/write code, for each line I have to check cppreference to find out if throws.
- Throw/catch type is somehow subtle\
"string" is const char* instead of std::string.
- catch(...) kind of meaningless\
If you are in the catch(...) block, you know nothing about what happened so you don't know what to do. People may say you can do some clean-up but you don't even know if your object is valid or not.
- Not zero cost\
This is the golden rule in C++. It is said runtime can be close to zero cost but it definately increases binary size.

[Back to Exception](../README.md)
