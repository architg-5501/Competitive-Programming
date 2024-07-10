const cat = {
    name: 'blue steeve',
    color: 'grey',
    breed: 'scootish fold',
    meow() {
        console.log("this is:", this);
        console.log(`${this.name} says meowss`)
    }
}

const meow2 = cat.meow;