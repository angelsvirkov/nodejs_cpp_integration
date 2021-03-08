const myModule = require("./build/Release/myModule.node");

console.log("This module exports the following properties", myModule);

// console.log("Calling the function: ", myModule.helloWorld("Ma friend"));

module.exports = myModule;
