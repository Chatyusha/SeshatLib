# SeshatLib

**SeshatLib** is a set of Mathematics Libraries by C++.

「Seshat, under various spellings, was the ancient Egyptian goddess of wisdom, knowledge, and writing. She was seen as a scribe and record keeper, and her name means she who scrivens (i.e. she who is the scribe), and is credited with inventing writing. She also became identified as the goddess of accounting, architecture, astronomy, astrology, building, mathematics, and surveying. 」–––– ([Wikipwdia, Seshat - Wikipedia](https://en.wikipedia.org/wiki/Seshat))

This library is named after her, and by using this library, you can write a variety of mathematical calculations in a concise manner.

## QuickStart

```sh
git clone https://github.com/Chatyusha/SeshatLib.git

cd SeshatLib

make all
```

## Contents

|library name|functionalities|
|:-:|:-:|
|matrix|matrix calculation|
|complex|complex calculation|

## Usage

If you put *SeshatLib* on the same place as cpp-sources, like *main.cpp*.

You can select the libraries' name from the table [here](##Contents)
```compile.sh
# current_directory ---- SeshatLib
#                      \---- main.cpp

g++ main.cpp -I./SeshatLib/include -L./SeshatLib/lib -l<library name>

# Example, when you use matrix library ...

g++ main.cpp -I./SeshatLib/include -L./SeshatLib/lib -lmatrix

```
