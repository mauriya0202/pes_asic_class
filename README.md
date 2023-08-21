# VLSI Physical Design for ASIC
Guided by Kunal Ghosh
<details>
<summary>Day 1 - Introduction to RISC-V ISA and GNU compiler toolchain</summary>
  
## Introduction to RISC-V basic keywords

+ Instruction Set Architecture (ISA)
+ Reduced Instruction Set Computing (RISC V)
+ RTL Implementation

## From Apps to Hardware

+ Application Software
+ System Software
  - Operating system
  - Compiler
  - Assembler
+ Hardware
+ Hardware Description Language
  - synthesis of RTL
 
## Detailed Description Of Course Content

+ Pseudo Instructions
+ Base Integer Instructions (representation RV64I)
+ Multiply extension (RV64M)
+ Single and Double precision floating point extension (RV64F and RV64D)
+ Application Binary Interface (ABI)
+ Memory allocation and Stack pointer

## Labwork
  
### Task 1: C program using GCC and Spike simulation

![Image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/895b2af0-944c-43c9-a9b9-b110223f246d)

![W](https://github.com/mauriya0202/pes_asic_class/assets/112739882/b2a7294a-ee58-4871-8890-1a94d676de48)

``` c
#include <stdio.h>
int main(){
 int i;
 int sum=0;
 int n=5;
 for(i=0;i<=n;i++){
 sum+=i;
 }
 printf("sum to %d:%d \n",n,sum);
 return 0;
}
```



### Task 2: Debugging ALP

+ O1

![W](https://github.com/mauriya0202/pes_asic_class/assets/112739882/4bde14fc-eea8-408d-835f-b212ce06a037)


+ Ofast

![W](https://github.com/mauriya0202/pes_asic_class/assets/112739882/c23e717c-707f-4b72-a20f-fff7bfbfc44c)


Debugging for Ofast

![W](https://github.com/mauriya0202/pes_asic_class/assets/112739882/6ae1e6f1-b476-4233-855d-f06b1de6c77e)


![W](https://github.com/mauriya0202/pes_asic_class/assets/112739882/f6f0fc39-6a8d-40eb-89a6-dd702435a96e)

## Integer Number representation

### Number system for unsigned numbers

+ 64 bit double word
  - LSB
  - MSB
+ word (32 bit)
+ Range of Unsigned numbers : [0, (2^n)-1 ]

### Number system for signed numbers
+  Two's complement representation
+  MSB as Sign bit
   - [-2^(n-1), 2^(n-1)-1] 

### Task 3: Signed and Unsigned numbers

![W](https://github.com/mauriya0202/pes_asic_class/assets/112739882/64fbde5d-ad02-4ca9-8516-3fa2d9cde02f)


![W](https://github.com/mauriya0202/pes_asic_class/assets/112739882/f8b491af-3adb-4507-a910-ed7ac02c3830)

</details>
<details>
<summary>Day 2 - Introduction to ABI and basic verification flow</summary>

## Aplication Binary Interface 

### Task 1: Sum 1 to n using ASM

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/89d6a292-d6ff-4099-847d-906f05273053)


### Task 2:  To Run C-Program On RISC-V CPU

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/a58aa33a-ecaf-4991-9d21-30d03b4929ac)

</details>

