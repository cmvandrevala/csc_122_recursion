1: clean
	g++ 1_tail_recursion.cpp -o 1_tail_recursion
	./1_tail_recursion

2: clean
	g++ 2_head_recursion.cpp -o 2_head_recursion
	./2_head_recursion

3: clean
	g++ 3_linear_recursion.cpp -o 3_linear_recursion
	./3_linear_recursion

4: clean
	g++ 4_tree_recursion.cpp -o 4_tree_recursion
	./4_tree_recursion

5: clean
	g++ 5_nested_recursion.cpp -o 5_nested_recursion
	./5_nested_recursion

6: clean
	g++ 6_indirect_recursion.cpp -o 6_indirect_recursion
	./6_indirect_recursion

7: clean
	g++ 7_indirect_recursion_example.cpp -o 7_indirect_recursion_example
	./7_indirect_recursion_example

8: clean
	g++ 8_memoization.cpp -o 8_memoization
	./8_memoization

clean:
	@rm -f 1_tail_recursion
	@rm -f 2_head_recursion
	@rm -f 3_linear_recursion
	@rm -f 4_tree_recursion
	@rm -f 5_nested_recursion
	@rm -f 6_indirect_recursion
	@rm -f 7_indirect_recursion_example
	@rm -f 8_memoization
