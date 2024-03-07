<p align="center">
  <a>
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="Logo" width="200" height="200">
  </a>

  <p align="center">
    My own Wolfenstein 3D<br>
    Project Cub3d of 42 school
    <br />
	</p>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Makefile-8A2BE2">
  <img src="https://img.shields.io/badge/C-4682B4">
  <img src="https://img.shields.io/badge/Shell-2E8B57">
  <img src="https://img.shields.io/badge/Gcc-00FF00">
  
</p>

## &#x1F4CC; Index 
- [What is philosophers?](#-what-is-philosophers)
- [Rules](#-rules)
- [Set the params](#-set-the-params)
- [Usage](#-usage)
- [Examples](#-examples)

## &#x2728; What is cub3d?

The goal of cub3d is to make a 3d game using raycasting like Wolfenstein 3D. Using a minilibx library, DDA algoritm and the correct parsing.
It's two-person project was done with full bonuses by `vcereced` and `dgarizad` students of 42. Enjoy the game!

<p align="center">Mandatory part, super optimized:</p>
<p align="center">
	<img src="https://github.com/vcereced/cub3d/assets/120835200/2b3a067d-08e8-49e1-a744-ba27b193cc44" alt="Imagen" width="350">
</p>	
<p align="center">Bonus part, heavier due to the extra rendering:</p>
<p align="center">
	<img src="https://github.com/vcereced/cub3d/assets/120835200/9f57a1a8-0761-4bdd-be96-cac2778ec847" alt="Imagen" width="340">
</p>

## 🕹 Controls

| | |
|---|---|
|&#x2B06;| `W` |
|&#x2B05;| `A`|
|&#x2B07;| `S`|
|&#x27A1;| `D`|
|&#x21BA;| &larr;|
|&#x21BB;| &rarr;|
|&#x1F52B;| `space` |
|&#x270B;| `Q`|
|&#x274C;|  `ESC`|

## 🛠 Set the map

| | |
|---|---|
|`number_of_philosophers`| number of philosophers (process / threads). |
|`time_to_die`| Miliseconds after starting his last `eating` or start de simulation to die. |
|`time_to_eat`| Milliseconds will spend to `eating` after take the 2 forks. |
|`time_to_sleep`| Milliseconds will spend to `sleeping`. |
|`number_of_times_each_philosopher_must_eat`| [optional]. If all ate at least `number_of_times_each_philosopher_must_eat`, simulation finish. If not specified, simulation continue till someone die.|
|`number_of_philosophers`| number of philosophers (process / threads). |


## &#x1F4BB; Usage

`cd philo && make` to compile the executable with threads / mutex.

`cd philo_bonus && make` to compile the executable with process / semaphores.

`make clean` remove .o files.

`make fclean` remove .o files and .a files and executable.

## &#x1F4D6; Examples

The arguments of the executable should be:
```bash
number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]
```

Execute whith the arguments in the terminal.

```bash
./philo 4 310 200 100
```

Should one philosopher die. Output should be:

<img width="377" alt="Screen Shot 2024-03-07 at 5 37 21 PM" src="https://github.com/vcereced/philosopher/assets/120835200/c7a4e095-354e-4788-a005-05f01977d02d">

Execute the bonus whith the arguments in the terminal.

```bash
./philo_bonus 4 410 200 100 1
```
 Output should be:

 <img width="377" alt="Screen Shot 2024-03-07 at 5 42 35 PM" src="https://github.com/vcereced/philosopher/assets/120835200/a22b1c3d-adcd-4d59-a1c1-faf567a40e12">




