const events = require("events");

const eventEmitter = new events.EventEmitter();

function listener1() {
  console.log("Event received by Listener 1");
}

function listener2() {
  console.log("Event received by Listener 2");
}

eventEmitter.addListener("write", listener1);
eventEmitter.on("write", listener2);

eventEmitter.emit("write");
console.log(eventEmitter.listenerCount("write"));

eventEmitter.removeListener("write", listener1);
console.log("Listener 1 is removed");

eventEmitter.emit("write");
console.log(eventEmitter.listenerCount("write"));
