
#line 2 "index.md"

	#include <iostream>
	
#line 26 "index.md"

	
#line 45 "index.md"

	static char plugboard(char c) {
		
#line 47 "index.md"
;
		return c;
	}

#line 27 "index.md"
;
	static inline char encode(char c) {
		
#line 54 "index.md"

	c = plugboard(c);
	
#line 56 "index.md"
;
	c = plugboard(c);

#line 29 "index.md"
;
		return c;
	}

#line 4 "index.md"
;
	int main(
		int argc, const char *argv[]
	) {
		
#line 14 "index.md"

	
#line 15 "index.md"
;

#line 20 "index.md"

	
#line 21 "index.md"
;

#line 36 "index.md"

	char c;
	while (std::cin.get(c)) {
		std::cout << encode(c);
	}

#line 8 "index.md"

	}
