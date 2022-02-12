helloworld:
	cd 00_helloworld/cpp && g++ helloworld.cpp -o helloworld
	cd 00_helloworld/cpp && g++ helloworld.cpp -lcppunit -o helloTest

test-helloworld:
	cd 00_helloworld/cpp && chmod +x helloworld && ./helloTest

lab1:
	echo "Example for running lab1"
	cd 01_primitives && g++ file_in.cpp -o file_in && ./file_in

clean:
	cd 00_helloworld/cpp && $(RM) helloworld helloTest
