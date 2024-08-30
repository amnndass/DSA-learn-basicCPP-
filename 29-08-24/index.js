import figlet from 'figlet';
import chalk from 'chalk';

figlet("join my SIH team <3", function (err, data) {
  if (err) {
    console.log("Something went wrong...");
    console.dir(err);
    return;
  }
  console.log(chalk.green(data));
  console.log(chalk.blue(data));
  console.log(chalk.red(data));
  console.log(chalk.yellow(data));
});



//console.log(chalk.blue(data));




// console.log(chalk.red('hacker hei bhai hacker'));
// console.log(chalk.blue('hacker hei bhai hacker'));
// console.log(chalk.green('hacker hei bhai hacker'));
// console.log(chalk.yellow('hacker hei bhai hacker'));
// console.log(chalk.gray('hacker hei bhai hacker'));


//gpt code

// import figlet from 'figlet';
// import chalk from 'chalk';

// figlet("Hello World!!", function (err, data) {
//   if (err) {
//     console.log("Something went wrong...");
//     console.dir(err);
//     return;
//   }
  
//   // Use chalk to style the output
//   console.log(chalk.blue(data));
// });




// const fs = require("fs");
// const path = require("path");

// let data = fs.readFileSync(path.join(__dirname, "myfont.flf"), "utf8");
// figlet.parseFont("myfont", data);
// console.log(figlet.textSync("myfont!", "myfont"));