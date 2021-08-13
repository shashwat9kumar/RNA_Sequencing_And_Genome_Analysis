# RNA Sequencing using C++
A project to sequence the RNA/DNA from actual error prone reads from a PCR machine and then to analyze the so sequenced DNA




## DNA Analysis Report
DNA or deoxyribonucleic acid is a long molecule that contains our unique genetic code. Like a recipe book it holds the instructions for making all the proteins in our bodies
Deoxyribonucleic acid (/diːˈɒksɪˌraɪboʊnjuːˌkliːɪk, -ˌkleɪ-/ (About this soundlisten);[1] DNA) is a molecule composed of two polynucleotide chains that coil around each other to form a double helix carrying genetic instructions for the development, functioning, growth and reproduction of all known organisms and many viruses. DNA and ribonucleic acid (RNA) are nucleic acids. Alongside proteins, lipids and complex carbohydrates (polysaccharides), nucleic acids are one of the four major types of macromolecules that are essential for all known forms of life
### The DNA is a comple substance whose understanding requires its analysis
DNA Analysis is the process of determining an individual's DNA characteristics
![diagram]('5-Reports'/img/dna.png)

## Analysis results
Here are someof the analysis results.
<br>

### 1. Error Proporations in DNA
The DNA has quality values define using Phred 33 encoding. These values pertain to the confidence score of the DNA reads, i.e. how likely are these values to be true
The graph reflectig them visually is a excellent way of demarcating bad quality readsfrom good quality reads.
Additionally, once determined, if the reads are of what category, the kind of sequencing to be used n them can be determined

![diagram]('5-Reports'/img/errorProportion.png)
<br>

<hr>
<hr>

<br>

### 1. Error Analysis for BAses in DNA
The Dna has 4 bases:
- Adenine
- Thyamie
- Guanine
- Cytosine

Finding and visualizing errors and qualities in these four bases separately will reveal interesting patterns.
<br>

One nice obsrvaton from the four quality graphs is that these grahs seem similar, hence proving that the original PCR process used to get the DNA read is a reliable, repeatable and reproducible process

Another observation is that even that they seem similar, they are actually different. Their respective points are different, thereby having overall differet average error line

#### Base A 
The Adenine is a base in DNA

![diagram]('5-Reports'/img/ErrorInBaseA.png)
<br>

<hr>

<br>


#### Base T
The Thyamine is a base in DNA

![diagram]('5-Reports'/img/ErrorInBaseT.png)
<br>

<hr>

<br>

#### Base G 
The Guanine is a base in DNA

![diagram]('5-Reports'/img/ErrorInBaseG.png)
<br>

<hr>

<br>

#### Base C 
The Cytosine is a base in DNA

![diagram]('5-Reports'/img/ErrorInBaseC.png)
<br>

<hr>
<hr>

<br>

### 3. GC Ratio comparison
The comparison of GC content between Actual DNA and Calculated DNA. This comparison shows 2 things:
- The sequenced DNA line becomes almost straight, proving that the DNA so sequenced is astable DNA. Hence the sequencing pocess worked fine, and is a trustworthy proces
- The Actual and Found DNA lines coincide as the DNAprogresses, proving that the sequenced DNA has a good level of genome coverage

![diagram]('5-Reports'/img/GCcontentComparison.png)
<br>

<hr>
<hr>

<br>

### 4. DNA Binary Signal Analysis
The DNA BInary Signal Analysis, is a binary signal plot of KMP algorithm output for different length of subsequences from Actual DNA checked against Found DNA
This type of analysis will be used to findthe ocation of genomes, similarity between Actual DNA and Found DNA and the changes of pattern matching on increase on the subsequence length

![diagram]('5-Reports'/img/BinaryDNAAnalysis.png)
<br>

<hr>
<hr>

<br>



### 5. DNA Chromatic Dichromation
The DNA frame Buffer

![diagram]('5-Reports'/img/ChromaticDichromation.png)
<br>

<hr>
<hr>

<br>



### 6. DNA frame Buffer
The DNA frame Buffer

![diagram]('5-Reports'/img/DNABufferFrame.png)
<br>

<hr>
<hr>

<br>
