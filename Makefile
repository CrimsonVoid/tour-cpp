.PHONY: gen build run fmt clean fclean
.DEFAULT_GOAL := run

BUILD_DIR=build
CMAKE_ARGS=--build $(BUILD_DIR)

gen: ## generate cmake build files
	cmake -G Ninja -B $(BUILD_DIR) -S .

build: ## build project
	cmake $(CMAKE_ARGS) --config Release

run: build ## run project
	./$(BUILD_DIR)/hello

fmt: ## format sources
	cmake $(CMAKE_ARGS) --target clang-format

clean: ## remove cmake build artifacts
	cmake $(CMAKE_ARGS) --target clean

fclean: ## full clean build dir
	rm -rf $(BUILD_DIR)