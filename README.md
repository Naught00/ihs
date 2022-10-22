This repository contains tools for working with the Irish Historical Studies
citation guidelines. It includes a bibliography style file (.bst) and a footnote
generator for LaTeX.

# Footnote generator
The generator requires GNU readline. To build:
	
	make

# Bibliography style file
In order to remove numbers from the bibliography, insert this:

	\renewcommand\@biblabel[1]{}

into the preamble of your .tex file. There is a much better way of doing this
from within the .bst file itself.

If you are citing a chapter in a multi-volume
work, the @article class muss be used instead. 



