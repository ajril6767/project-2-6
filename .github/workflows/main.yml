
name: Build C++ EXE

on:
  workflow_dispatch:
  push:
    branches:
      - main

jobs:
  build:
    runs-on: windows-latest

    steps:
      - name: Checkout
        uses: actions/checkout@v4

      - name: Find C++ file
        shell: pwsh
        run: |
          $files = Get-ChildItem -Path $env:GITHUB_WORKSPACE -Filter "*.cpp" -Recurse

          if ($files.Count -eq 0) {
              Write-Host "Tidak ada file .cpp!"
              exit 1
          }

          Write-Host "Menggunakan file:"
          $files | ForEach-Object {
              Write-Host $_.FullName
          }

      - name: Compile
        shell: pwsh
        run: |
          $files = Get-ChildItem -Path $env:GITHUB_WORKSPACE -Filter "*.cpp" -Recurse
          $source = $files[0].FullName

          g++ "$source" `
            -o "$env:GITHUB_WORKSPACE\program.exe" `
            -static `
            -static-libgcc `
            -static-libstdc++

          if ($LASTEXITCODE -ne 0) {
              Write-Host "COMPILATION GAGAL"
              exit 1
          }

          Write-Host "BUILD BERHASIL!"

      - name: Upload EXE
        uses: actions/upload-artifact@v4
        with:
          name: program-exe
          path: program.exe
