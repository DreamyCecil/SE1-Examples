# Serious Engine 1 Examples

> This is a fork of Croteam's Serious Engine 1.10 that contains various examples of simple mods for educational purposes.

Each example sits under its own branch and the [**repository's wiki**](https://github.com/DreamyCecil/SE1-Examples/wiki) contains detailed explanation of each example and its commits on their own respective pages.

- These examples are aimed towards beginners that wish to understand how certain features can be designed and implemented.
- Some examples require you to have at least some understanding of the Entity Source (`.es`) syntax.
- The examples for `EntitiesMP`, `GameGUIMP` and `GameMP` projects can also be applied to mods based on old Serious Engine 1 SDKs for **TFE** (v1.05) and **TSE** (v1.05 or v1.07).
- If you wish to see an example of a desired feature, you can leave a suggestion by [**creating a new issue**](https://github.com/DreamyCecil/SE1-Examples/issues).
  - **Do not** suggest features that are either too complex or too specific to some project. The examples are supposed to be generic and easy to understand.

# Project files

The code and project files in this repository are not in perfect condition and only exist purely for testing example code.

If you're looking for a suitable repository for your projects, you can take a look at [**the most notable SE1 forks here**](https://github.com/DreamyCecil/Serious-Engine/wiki/Serious-Engine-1-versions-&-forks#110-forks) and pick one for yourself.

### Engine components
- `DedicatedServer` - Dedicated server application for hosting multiplayer game
- `Ecc` - Entity Class Compiler for compiling entity source files (`*.es`)
- `Engine` - Serious Engine 1.10
- `EngineGUI` - Common GUI components for game tools
- `EntitiesMP` - All the entity logic
- `GameGUIMP` - Specific GUI components for game tools
- `GameMP` - Module for handling basic game logic
- `SeriousSam` - The main game executable
- `Shaders` - Compiled shaders for SKA models

### Engine tools
- `DecodeReport` - Tool for decoding crash report files (`*.rpt`)
- `Depend` - Tool for generating a list of dependency files based on a list of root files
- `MakeFONT` - Tool for generating font files for the game (`*.fnt`)
- `Modeler` - Serious Modeler application for creating and configuring models with vertex animations
- `RCon` - Remote console application for connecting to servers using an admin password
- `SeriousSkaStudio` - Serious SKA Studio application for creating and configuring models with skeletal animations
- `WorldEditor` - Serious Editor application for creating in-game levels

# Building and running

To build Serious Engine 1 examples, you will need **Visual Studio 2013** or later.

When running a selected project, make sure that its project settings under **Debugging** are setup correctly:
- Command: `$(PostBuildCopyDir)$(TargetFileName)`
- Working Directory: `$(SolutionDir)..\`

# License

Serious Engine is licensed under the GNU GPL v2 (see `LICENSE` file).

Some of the code included with the engine sources under `Sources/` is not licensed under the GNU GPL v2:

- **libogg** & **libvorbis** (`libogg/`, `libvorbis/`) by Xiph.Org Foundation
- **LightWave SDK** (`LWSkaExporter/SDK/`) by NewTek Inc.
- **zlib** (`Engine/zlib/`) by Jean-loup Gailly and Mark Adler
