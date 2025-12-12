package main

import (
	"fmt"
)

// Tukar1: kedua parameter by reference (pakai pointer)
func Tukar1(a, b *int) {
	temp := *a
	*a = *b
	*b = temp
}

// Tukar2: parameter pertama input saja (by value),
// parameter kedua input/output (by reference)
func Tukar2(a int, b *int) {
	temp := a
	a = *b // perubahan ini hanya lokal di fungsi
	*b = temp
}

func main() {
	var a, b int
	a = 10
	b = 5

	// panggil sesuai program utama
	Tukar1(&b, &a) // Tukar1(b,a)
	Tukar2(a, &b)  // Tukar2(a,b)

	fmt.Println("Hasil akhir:")
	fmt.Println("a =", a)
	fmt.Println("b =", b)
}
