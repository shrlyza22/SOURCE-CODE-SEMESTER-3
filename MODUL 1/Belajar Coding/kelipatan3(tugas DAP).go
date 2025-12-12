package main

import "fmt"

func main() {
	var x int

	fmt.Scan(&x)

	if x%3 == 0 {
		fmt.Print("Ini adalah kelipatan 3")
	} else {
		fmt.Print("Ini bukan kelipatan 3")
	}
}
