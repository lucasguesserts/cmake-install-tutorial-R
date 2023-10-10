.PHONY: build

build: ## build the project
	rm -rf build/
	cmake -Bbuild
	cmake --build build --config Debug
