# Resources

The project has been set up via tutorial available on https://medium.com/jspoint/a-simple-guide-to-load-c-c-code-into-node-js-javascript-applications-3fcccf54fd32

# Requirements

- globally installed `node-gyp`
- c++ compiler available (e.g. gnu)

# Steps to build a native node module

1. Adjust `index.cpp`
2. Run `node-gyp configure` from root's directory
3. Run `node-gyp build`
