class HelloWorldGreeter(val name : String) {
  fun greet() {
    println("Hello, ${name}");
  }
}

fun main(args : Array<String>) {
  HelloWorldGreeter("World").greet()
}