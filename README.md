# affine-cipher-algorithm

The affine cipher is a type of monoalphabetic substitution cipher, wherein each letter in an alphabet is mapped to its numeric equivalent, encrypted using a simple mathematical function, and converted back to a letter.

In the affine cipher the letters of an alphabet of size m are first mapped to the integers in the range 0 … m − 1. It then uses modular arithmetic to transform the integer that each plaintext letter corresponds to into another integer that correspond to a ciphertext letter. The encryption function for a single letter is : 

E(x) = (ax + b) mod m.

where modulus m is the size of the alphabet and a and b are the key of the cipher. The value a must be chosen such that a and m are coprime. The decryption function is : 

D(x) = a^-1(x - b) mod m
------------------------
where a^-1 = a inverse.
1 = a * a^-1 mod m.

D(E(x)) = a_inv (E(x) - b) mod m
	= a_inv (((ax + b) mod m) - b) mod m
	= a_inv (ax + b - b) mod m
	= a_inv ax mod m
	= x mod m.

Encrypting..
taking a = 5 and b = 8.

plaintext:	A	F	F	I	N	E	C	I	P	H	E	R
x	0	5	5	8	13	4	2	8	15	7	4	17
(5x + 8)	8	33	33	48	73	28	18	48	83	43	28	93
(5x + 8) mod 26	8	7	7	22	21	2	18	22	5	17	2	15
ciphertext:	I	H	H	W	V	C	S	W	F	R	C	P


Decrypting the same above example..
taking a = 5 and b = 8.

ciphertext:	I	H	H	W	V	C	S	W	F	R	C	P
y	8	7	7	22	21	2	18	22	5	17	2	15
21(y − 8)	0	−21	−21	294	273	−126	210	294	−63	189	−126	147
21(y − 8)mod26	0	5	5	8	13	4	2	8	15	7	4	17
plaintext:	A	F	F	I	N	E	C	I	P	H	E	R

