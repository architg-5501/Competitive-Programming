param (
    [string]$sourceFile,
    [string]$outputFile,
    [string]$inputFile,
    [string]$resultFile
)

$exeFile = "${outputFile}.exe"

if (Test-Path $exeFile) {
    Remove-Item $exeFile -Force
}

copy $sourceFile $outputFile

g++ $outputFile -o $outputFile

if (Test-Path $exeFile) {
    .\$exeFile < $inputFile > $resultFile
    Remove-Item $exeFile -Force
}

Remove-Item $outputFile -Force
