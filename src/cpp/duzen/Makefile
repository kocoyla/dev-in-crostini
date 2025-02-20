hepsi: derle calistir

derle: yaz

yaz: ana.o yazi.o
	c++ -std=c++23 *.o -o yaz

yazi.o: yazi.cpp
	c++ -std=c++23 yazi.cpp -c
ana.o: ana.cpp
	c++ -std=c++23 ana.cpp -c

calistir:
	./yaz
test:
	./yaz |& tee yaz.out
	diff -q yaz.out yaz.out.golden
diff:
	diff yaz.out yaz.out.golden

updateGolden:
	./yaz |& tee yaz.out.golden

clean:
	rm -rf *.o yaz yaz.out

