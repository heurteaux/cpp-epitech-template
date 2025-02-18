# Epitech Project - Template

Sample description.

## Overview

Sample overview.

## Assignment
[View project assignment](assignment.pdf)
## Building

### Setup CMake
```bash
cmake -S . -B build
```
### Build
```bash
# Release build
cmake --build build

# Build unit tests
cmake --build build --target unit_tests

# Debug build
cmake --build build --target dbg_build
```

## Usage

```bash
./nanotekspice circuit_file.nts
```

### Commands
- `exit`: Close program
- `display`: Show current tick and all input/output values
- `input=value`: Set input value (0, 1, or U)
- `simulate`: Process one simulation tick
- `loop`: Run simulation continuously until CTRL+C

## Circuit Configuration

Configuration files (.nts) use the following format:
```
.chipsets:
input in1
input in2
4081 and1
output out1

.links:
in1:1 and1:1
in2:1 and1:2
and1:3 out1:1
```

### Supported Components

#### Special Components
- `input`: Single-pin input component
- `clock`: Input that inverts after each simulation
- `true`: Always outputs true
- `false`: Always outputs false
- `output`: Circuit output component

#### Basic Gates
- AND
- OR
- XOR
- NOT

#### Gate Components
- 4001: Four NOR gates
- 4011: Four NAND gates
- 4030: Four XOR gates
- 4069: Six INVERTER gates
- 4071: Four OR gates
- 4081: Four AND gates

#### Advanced Components
- 4008: 4-bit adder
- 4013: Dual Flip Flop
- 4017: 10-bit Johnson decade
- 4040: 12-bit counter
- 4094: 8-bit shift register
- 4512: 8-channel data selector
- 4514: 4-bit decoder
- 4801: Random access memory
- 2716: ROM (initialized from ./rom.bin)
- Logger: Writes computed characters to ./log.bin

## Error Handling

The program exits with code 84 on errors:
- Invalid circuit file syntax
- Unknown component types
- Unknown component names
- Duplicate component names
- Empty circuit
- Other runtime errors

## Technical Implementation

- Components implement the `nts::IComponent` interface
- Uses factory pattern for component creation
- Handles undefined states using a three-state logic system
- Exception-based error handling with `std::exception`
