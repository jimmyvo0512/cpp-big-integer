test-all:
	g++ test_all.cpp big_int.cpp -o test_all
	./test_all
	rm -f test_all

.PHONY: test-all
