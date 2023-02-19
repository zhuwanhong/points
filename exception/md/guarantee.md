# Exception guarantee

- Basic exception guarantee\
No memory or resource leak.\
**POINT: [RAII](raii.md)**
- Strong exception guarantee\
Keep original state.\
**POINT: copy and swap**
- Nothrow (or nofail) exception guarantee\
Never throws exceptions.\
**POINT: noexcept specifier, which is mostly in favor of compiler developers**\
**POINT: C function is always automatically noexcept.**

[Back to Exception](../README.md)
