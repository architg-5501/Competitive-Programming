function callTwice(func) {
    func();
    func();
}

function rolldie() {
    const roll = Math.floor(Math.random() * 6) + 1;
    console.log(roll);

}

callTwice(rolldie)