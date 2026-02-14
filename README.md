# Modular Settlement System (Unreal Engine 5 C++)

## Overview

There are two settlement types:

- Minor Settlement → Passive resource generation
- Major Settlement → Building construction and production

The system follows a clean, component-based architecture.

## Core Components
### UResourceComponent – Resource Storage

- Stores resources (Wood, Stone, Gold, Food, Weaponry)

- Add / Spend resources

- Check availability

### USettlementComponent – Settlement Identity

- Settlement Name

- Level

- Type (Minor / Major)

- Population

- Upgrade logic

### UBuildingManagerComponent – Construction System (Major Only)

- Construct buildings
- Check resource requirements
- Validate building prerequisites
- Track constructed buildings

### UProductionComponent – Resource Generator (Major Only)

- Handles production timers
- Generates resources from buildings
- Tracks active production

## Settlement Types
### Minor Settlement

- No buildings
- Automatically produces fixed resources
- Timer-based passive income

### Major Settlement

- Can construct buildings
- Buildings require resources
- Buildings may require other buildings
- Buildings generate resources over time

## Buildings

 Each building:
- Requires resources (Wood, Stone, Gold)
- May require prerequisite buildings
- Produces resources at fixed intervals

Example:

- Farmhouse → Produces Food
- Blacksmith → Produces Weaponry
- Buildings require resources to construct and generate resources over time once built.

## ARCHITECTURE OVERVIEW
![Doc](https://github.com/user-attachments/assets/7fdf588d-fd89-432d-903c-337fb0c0bac3)
---

## Project Location (Important)

All core implementation files are located inside the **Source/** folder.

