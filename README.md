# VLSI Physical Design for ASIC
Guided by Kunal Ghosh
<details>
<summary>Week 1 Day 1 - Introduction to RISC-V ISA and GNU compiler toolchain</summary>
  
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
<summary>Week 1 Day 2 - Introduction to ABI and basic verification flow</summary>

## Aplication Binary Interface 

### Task 1: Sum 1 to n using ASM

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/89d6a292-d6ff-4099-847d-906f05273053)


### Task 2:  To Run C-Program On RISC-V CPU

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/a58aa33a-ecaf-4991-9d21-30d03b4929ac)

</details>

<details>
  <summary>Week 2 Day 1 - Introduction to Verilog RTL design and Synthesis</summary>

  ## Simulator

  + iverilog
  + TestBench : for application of stimulus and observe the output.
  + Test Vectors
  + Simulator checks for changes in the input signals, for every change output will be evaluated.
  + If no change at the input no output evaluation.
  + Output is a VCD file (Value Change Dump).
  + GTK Wave to view the waveform.

## Labwork

### Task 1: GTKWAVE
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/43dbc1a4-b891-45e7-bc0e-59a5f26c8d27)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/55091f95-9276-454f-af83-e2912946d772)

## Synthesizer

+ Converting RTL to Netlist
+ Yosys takes design and .lib file to give out the netlist
+ Verification of Synthesis: Netlist, testbench, iverilog


## Labwork

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/8fd21ae2-bd84-4dae-bba6-bcb90e86d503)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/6dffaf48-2507-4953-a8ed-636c039f234e)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/4c4319b2-a494-49a4-8ed4-af3837873503)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/d3720856-183c-480e-bc1a-2f4115c409de)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/c261fc88-e399-483f-ba67-911aaf0b2448)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/075bf5c9-265b-42c4-830b-a5e899d44f21)


  
</details>

<details>
  <summary>Week 2 Day 2 - Timing libs, hierarchical vs flat synthesis and efficient flop coding styles </summary>

  + tt-typical
  + 025C-temperature
  + Process, Voltage, Temperature
  + CMOS technology
  + Delay model: LUT
  + Wider cells are faster but consume more power

## Labwork

+ Hierarchichal Design
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/327ac290-835d-434f-8300-6ddb11dbf5a0)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/41aad81a-2201-4c88-8303-6cbf2ab43ae7)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/282d662b-4f93-4fbd-890e-de5ac6391cca)

+ Flatten Design
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/adadd34a-fe13-42f7-8747-be57be24ab29)
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/84eaf200-4c3c-4e08-b4db-15be4ee5b3a8)

+ Module level Synthesis is preffered when we have multiple instances of the same module or divide and conquer approach.
+ Flop coding styles
  - dff_async_set

    ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/82e257a1-baea-4cd7-a17d-82d09ae6a14a)
    ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/ece4fff6-01ed-43e8-bb79-1fa16ed53c55)

  - dff_asyncres
    
    ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/83c3673e-fd04-491b-bbab-9bdca151a10f)
    ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/df4ba522-d0f9-4ce6-934d-ddde71756fdb)

  - dff_syncres
    
    ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/e227d89c-b645-4713-ad00-88cee8e1bcc1)
    ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/57286430-f8c6-4907-aa21-3c164292fd82)


</details>

<details>
  <summary>Week 2 Day 3 -  Combinational and sequential optmizations </summary>

- Combinational Logic Optimization
  + Constant Propogation
  + Boolean Logic Optimization

- Sequential Logic Optimization
  + Basic: Sequential Constant propogation
  + Advanced: Retiming, State Optimization, Sequential logic cloning

## Labwork

### Task 1: Combinational

+ opt_check
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/246d9882-4d84-46fa-939f-fcd18853906c)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/04edbf92-d002-4903-adee-938ef8a8604c)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/e5e8f2f0-cc16-4172-bf37-7dc80adea678)

+ opt_check2
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/571fc464-a3dd-4c53-8f77-54abeed82fda)
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/2ee2d5a1-4e82-4254-8856-6ba0348b2965)

+ opt_check3
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/534d035d-f618-4478-b952-48484b51463b)


+ opt_check4
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/3447a165-69cf-4c7d-9466-37a8b692a8d7)

+ multiple_module_opt
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/75f451ae-cf56-4592-afaf-331ee28584e0)

### Task 2: Sequential

+ dff_const1
  
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/271c4089-1f9e-46e3-9a58-f0e808be931f)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/7d73573a-4913-49bb-87a2-6d6df08ecb4e)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/b5ad63a5-eef6-4203-9c97-c6a4f4d4b540)



+ dff_const2
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/f5c5bac7-8e03-4752-a42b-bbb8584c97cb)
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/5a27d1d9-1112-4acc-a615-09f018cc1554)
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/60d3ab1e-8c79-4846-86a5-2c8b87f69b5c)

+ dff_const3
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/ee33378d-ec18-4b0d-97f7-73a490098413)
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/4c16c52e-b2d1-4dd3-bac0-5e62df4edfcc)

+ dff_const4
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/505a0ed7-b2de-475e-922e-d7cb6cc987d3)
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/d8fa6feb-6062-4aa3-9843-fb4e981b6d67)

+ dff_const5
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/29a812ac-950d-4af8-a79e-57e2c803d956)
  
  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/3bd480fd-e03c-4454-93b2-d671da058185)

### Task 3

+ counter_opt

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/22181e0f-642d-4b77-a642-11c9ce4c7b9c)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/f149323d-10f9-4b13-aedf-44271c0f1907)

+ counter_opt2

  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/b3c11c6f-1132-4173-9cc7-d2dc24714166)

  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/68cceb31-3d65-43a0-beeb-6d99ad90bd27)


</details>

<details>
  <summary>Week 2 Day 4 -  GLS, blocking vs non-blocking and Synthesis-Simulation mismatch </summary>
  
## Labwork

### Task 1

+ ternary_operator_mux
  
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/65366116-fa29-454b-adf4-fb1be05be67e)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/a0bbeac1-9ca1-40c2-9836-85140e8e9147)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/9cd9e664-fc2a-49c0-bafd-5a714aa292fa)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/46f8d017-72fd-424a-8555-13df07169197)


+ bad_mux

 ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/706a9b1b-9027-4625-9bb5-52448ab6d174)
 
![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/8f410770-8d5e-4a1d-8d43-b1d270ba9cd4)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/e50133e6-987d-4e10-be01-f2b48d75d530)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/1fc93a64-70e3-4610-a40b-d2901b2273c8)

### Task 2

+ breaking_caveat

  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/76ffa205-1d82-4104-a46a-c39da8973876)

  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/4129217d-de97-482f-b8d0-ac746cf4a9eb)

  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/28c9649d-51ff-4e89-914c-1ced01fff22f)

  ![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/c5199b5f-18b4-4b7e-a86a-ee389afe4503)

![image](https://github.com/mauriya0202/pes_asic_class/assets/112739882/34f59ced-b2c2-4e68-9a0d-aa691b866afa)


</details>
