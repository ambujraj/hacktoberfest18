class HelloWorld {
    private hello:string = "Hello World";

    public helloWorld = () => {
        return this.hello;
    }
};

const hi= new HelloWorld();
console.log(hi.helloWorld());