Flags = -g -Wall -MMD
Srcs = $(shell find ./src -name '*.cpp' -o -name '*.c')
Objs = $(subst ./src,./build,$(addsuffix .o,$(basename $(Srcs))))
Incs = -I include
Libs = -lSDL2 

$(info )

./build/An:$(Objs)
	@echo "---------------------------------------"
	@echo "▸building executable\n"
	@g++ $(Flags) --sanitize=address -o ./build/An $(Objs) $(Libs)
	@sleep 1
	@tree build -I Angine -I glad -P An --noreport
	@echo "		done.\n"

./build/Angine/%.o:./src/Angine/%.cpp
	@echo "▸building "$(notdir $@)
	@mkdir -p $(@D)
	@g++ $(Flags) $(Incs) -c -o $@ $<

./build/glad/%.o:./src/glad/%.c
	@echo "▸building "$(notdir $@)
	@mkdir -p $(@D)
	@g++ $(Flags) $(Incs) -c -o $@ $<

-include $(Objs:.o=.d)

clear:
	@rm -rf build/
