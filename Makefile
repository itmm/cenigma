MDs = $(shell hx-srcs.sh)
CXXs = $(shall hx-files.sh $(MDs))
.PHONY: tests clean

tests: hx-run
	@echo "TESTS"
	@./cenigma </dev/null

hx-run: $(MDs)
	@echo "HX"
	@hx
	@date >hx-run
	@make -s cenigma

clean:
	@echo "RM"
	@rm -f hx-run $(CXXs) cenigma
