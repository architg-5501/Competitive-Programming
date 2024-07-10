for (let i = 0; i < 10; i++) {
    console.log(`i is : ${i}`);
    for (j = 1; j < 5; j++) {
        console.log(`i am fime:${j}`);
    }
}

let ipl = [['rcb', 'csk', 'mi', 'rr'], ['virat', 'dhoni', 'rohit', 'kl rahul'], ['abd', 'jadeja', 'bumrah', 'gayle']];
for (let i = 0; i < 4; i++) {
    console.log(`ipl team ${ipl[i]}`)
    for (let j = 0; j < 4; j++) {
        console.log(`whatever ${ipl[i][j]}`);
    }
}