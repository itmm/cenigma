```
@Def(file: cenigma.cpp)
	#include <iostream>
	@put(globals);
	int main(
		int argc, const char *argv[]
	) {
		@put(main)
	}
@End(file: cenigma.cpp)
```

```
@def(main)
	@put(unit-tests);
@end(main)
```

```
@add(main)
	@put(parse args);
@end(main)
```

```
@def(globals)
	@put(encode prereqs);
	static inline char encode(char c) {
		@put(encode);
		return c;
	}
@end(globals)
```

```
@add(main)
	char c;
	while (std::cin.get(c)) {
		std::cout << encode(c);
	}
@end(main)
```

```
@def(encode prereqs)
	static char plugboard(char c) {
		@put(plugboard);
		return c;
	}
@end(encode prereqs)
```

```
@def(encode)
	c = plugboard(c);
	@put(rotors);
	c = plugboard(c);
@end(encode)
```

