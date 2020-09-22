package main

import "fmt"

func main() {
	var (
		firstName, lastName string  = "John", "Doe"
		age                 int     = 92
		salary              float64 = 100000
		isConfirmed         bool    = true
	)

	fmt.Printf("firstName: %s, lastName: %s, age: %d, salary: %f, isConfirmed: %t\n",
		firstName, lastName, age, salary, isConfirmed)

	var name = "John Doe"
	fmt.Printf("Variables 'name' is of type %T\n", name)

	// Multiple variable declarations with inferred types
	firstName, lastName, age, salary = "John", "Maxwell", 28, 50000.0

	fmt.Printf("firstName: %T, lastName: %T, age: %T, salary: %T\n",
		firstName, lastName, age, salary)

	name1 := "John Doe"
	age, salary, isProgrammer := 35, 50000.0, true

	fmt.Println(name1, age, salary, isProgrammer)
}
