function makeMysteryFunc() {
    const rand = Math.random();
    if (rand > 0.5) {
        return function () {
            console.log("congrats you are geniues");

        }

    }
    else {
        return function () {
            alert("YOU HAVE BEEN ALERTED");
        }
    }
}