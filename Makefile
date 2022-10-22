all:
	mkdir -p build
	cc src/*.c -o build/foot -lreadline
run:                             
	mkdir -p build           
	cc src/*.c -o build/foot -lreadline 
	build/foot
