package main

import "fmt"

func main() {
	var a int

	fmt.Scan(&a)
	if a == 5 {
		fmt.Print(a, " adalah angka 5")
	} else {
		fmt.Print(a, "  bukan angka 5")
	}

}
