assets:
	ln -sf ../assets bin/assets

game: assets
	cc -o bin/pcfutbol src/main.c -lSDL3 -lSDL3_image

run:
	bin/pcfutbol

clean:
	rm bin/pcfutbol

.PHONY: assets