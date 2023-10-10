.PHONY: build

build: ## build the project
	rm -rf build/
	cmake -DR_USE_CPM=ON -Bbuild
	cmake --build build --config Debug
