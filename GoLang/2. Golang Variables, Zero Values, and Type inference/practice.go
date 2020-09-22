package main

import "fmt"

func main(){
	var firstName, lastName string = "Mayank ", "Wasekar"

	fmt.Printf("First Name = %s Last Name = %s\n", firstName,lastName)

	var (
		name, last = "Mayank", "Wasekar"
		age = 28
	)
	fmt.Printf("First %s Last %s age %d\n", name, last, age)

	salary := 500000
	fmt.Printf("Salary %d\n", salary)
}