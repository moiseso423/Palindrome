
#ifndef STACKS_H_
#define STACKS_H_

// this class has member variables, constants, and functions for the Stacks ADT
class Stacks
{
	public:
		static const int SSIZE = 50;
		typedef char SDATA[SSIZE];

		void create();
		void destroy();
		bool empty();
		bool full();
		void push(char);
		void pop(char&);

	private:
		SDATA data;
		int top;

};

#endif /* STACKS_H_ */
