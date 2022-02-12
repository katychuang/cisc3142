helloworld:
	cd 00_helloworld/cpp
	g++ helloworld.cpp -o helloworld
	g++ helloworld.cpp -lcppunit -o helloTest

test-helloworld:
	cd 00_helloworld/cpp
	chmod +x helloworld
	./helloTest

clean:
	cd 00_helloworld/cpp
	$(RM) helloworld helloTest
