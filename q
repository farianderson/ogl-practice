name: C/C++ CI

on:
  push:
    branches: [ "development" ]
  pull_request:
    branches: [ "development" ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - name: configure
      uses: actions/checkout@v4
    - name: make
      run: make build
      run: make
