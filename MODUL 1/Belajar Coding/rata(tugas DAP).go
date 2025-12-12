package main

import "fmt"

func main() {
	var x float64
	var jumlah float64
	var total float64
	var rata float64

	fmt.Scan(&x)
	for x != -999 {
		jumlah += 1
		total += x
		fmt.Scan(&x)
	}
	rata = total / jumlah
	if total == 0 {
		fmt.Print(total)
	} else {
		fmt.Print(rata)
	}
}
