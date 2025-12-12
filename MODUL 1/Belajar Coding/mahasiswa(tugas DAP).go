package main

import "fmt"

const nMax int = 51

type mahasiswa struct {
	nim   string
	nama  string
	nilai int
}
type arrayMahasiswa [nMax]mahasiswa

func nilaipertama(daftar arrayMahasiswa, n int, NIM string) int {
	for i := 0; i < n; i++ {
		if daftar[i].nim == NIM {
			return i
		}
	}
	return -1
}

func main() {
	var daftar arrayMahasiswa
	var idx, i, n int
	var nim string

	fmt.Scan(&n)
	for i = 0; i < n; i++ {
		fmt.Print("NIM: ")
		fmt.Scan(&daftar[i].nim)
		fmt.Print("Nama: ")
		fmt.Scan(&daftar[i].nama)
		fmt.Print("Nilai: ")
		fmt.Scan(&daftar[i].nilai)
		fmt.Println()
	}
	fmt.Print("Masukkan nim yang ingin dicari: ")
	fmt.Scan(&nim)
	idx = nilaipertama(daftar, n, nim)
	if idx == -1 {
		fmt.Println("Tidak ditemukan")
	} else {
		fmt.Printf("NIM: %s, Nama: %s, Nilai: %d", daftar[idx].nim,
			daftar[idx].nama, daftar[idx].nilai)
	}
}
