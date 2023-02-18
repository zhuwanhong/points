# Exception guarantee

- Basic exception guarantee\
No memory or resource leak.\
POINT: RAII
- Strong exception guarantee\
Keep original state.\
POINT: copy and swap
- Nothrow (or nofail) exception guarantee\
Never throws exceptions.
POINT: noexcept specifier
