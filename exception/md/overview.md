# Exception is BAD
###### <sub><sup>(OPINION, not fact)</sup></sub>
Why
- Breaks the natual flow of your code\
This introduced huge complexity, when I read/write code, for each line I have to check cppreference to find out if throws.
- Not zero cost\
This is the golden rule in C++. This is why we can proudly declare C++ beats Java/C#/Python/whatever other languages, but exception is a shame. It is said runtime can be close to 0 cost but it definately increases binary size so loading can be slow.
- Throw/catch type is somehow subtle\
"string" is const char* instead of std::string.
- catch(...) kind of meaningless\
If you are in the catch(...) block, you know nothing about what happened so you don't know what to do. People may say you can do some clean-up but you don't even know if your object is valid or not.

