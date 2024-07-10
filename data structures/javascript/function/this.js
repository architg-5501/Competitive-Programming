// let counter=createCounter();
// let counter1=createCounter();

// function createCounter(){
//   return(
//     {
//       count:0,
//       increment: function(){
//         this.count++;
//       }
//     }
//   )

// }



// counter1.increment();
// counter1.increment();
// counter.increment();
// console.log(counter);
// console.log(counter1);

function Car(name){
    this.name=name;
    this.start=function(){
        console.log(this.name + "started");
        console.log(this);
    }
}

let swift= new Car("Swift");
swift.start();


   
  