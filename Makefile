helloworld:
	cd 00_helloworld/cpp && g++ helloworld.cpp -o helloworld
	cd 00_helloworld/cpp && g++ helloworld.cpp -lcppunit -o helloTest

test-helloworld:
	cd 00_helloworld/cpp && chmod +x helloworld && ./helloTest

lab1: 01_primitives/lab1.o
	echo "Example for running lab1"
	cd 01_primitives && g++ lab1.cpp -o lab1 && ./lab1

clean:
	cd 00_helloworld/cpp && $(RM) helloworld helloTest
