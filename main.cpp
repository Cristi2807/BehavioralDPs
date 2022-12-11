#include <iostream>
#include "ChainOfResponsibility/UsernameHandler.h"
#include "ChainOfResponsibility/PasswordHandler.h"
#include "ChainOfResponsibility/TimeHandler.h"
#include "ChainOfResponsibility/Request.h"

#include "Command/Invoker.h"
#include "Command/SimpleCommand.h"
#include "Command/ComplexCommand.h"

#include "Mediator/ConcreteMediator.h"

#include "Memento/Originator.h"
#include "Memento/Caretaker.h"

#include "Observer/Observer.h"
#include "Observer/Subject.h"

#include "State/Context.h"
#include "State/ConcreteStateB.h"

#include "Strategy/ContextStrategy.h"
#include "Strategy/ConcreteStrategyA.h"
#include "Strategy/ConcreteStrategyB.h"

#include "Visitor/ConcreteComponentA.h"
#include "Visitor/ConcreteComponentB.h"
#include "Visitor/ConcreteVisitor1.h"
#include "Visitor/ConcreteVisitor2.h"


int Observer::staticNumber = 0;

int main() {

    // Chain of Responsibility

    auto *usernameHandler = new UsernameHandler;
    auto *passwordHandler = new PasswordHandler;
    auto *timeHandler = new TimeHandler;

    auto request1 = Request("cristi", "12345678", 17000);
    auto request2 = Request("cristi", "1234567890", 17000);

    usernameHandler->SetNext(passwordHandler)->SetNext(timeHandler);

    if (usernameHandler->Handle(request1).empty()) {
        std::cout << "All checks passed." << std::endl;
        std::cout << std::endl;
    }

    std::cout << usernameHandler->Handle(request2) << std::endl;
    std::cout << std::endl;

    // Command

    auto invoker = Invoker();
    invoker.setOnStart(new SimpleCommand("Saying Hello!"));
    auto receiver = Receiver();
    invoker.setOnFinish(new ComplexCommand(&receiver, "Send email", "Save Report"));

    invoker.DoSmthImportant();

    std::cout << std::endl;

    // Mediator

    auto component1 = Component1();
    auto component2 = Component2();

    auto mediator = ConcreteMediator(&component1, &component2);

    component1.DoA();
    std::cout << std::endl;
    component2.DoD();

    std::cout << std::endl;

    // Memento

    auto originator = Originator("State initial");
    auto careTaker = Caretaker(&originator);

    careTaker.backUp();
    originator.doSmth();

    careTaker.backUp();
    originator.doSmth();

    careTaker.backUp();
    originator.doSmth();

    careTaker.showHistory();

    careTaker.undo();
    careTaker.undo();

    std::cout << std::endl;

    // Observer

    auto subject = Subject();

    auto observer1 = Observer(&subject);
    auto observer2 = Observer(&subject);
    auto observer3 = Observer(&subject);

    subject.createMessage("Initial message");

    observer3.removeMeFromList();

    subject.createMessage("Second message");

    std::cout << std::endl;

    // State

    auto context = Context(new ConcreteStateB);

    context.Request1();
    context.Request2();
    context.Request1();

    std::cout << std::endl;

    // Strategy

    auto contextStrategy = ContextStrategy(new ConcreteStrategyA);

    contextStrategy.doSmth();

    contextStrategy.setStrategy(new ConcreteStrategyB);

    contextStrategy.doSmth();

    std::cout << std::endl;

    //Visitor

    auto componentA = ConcreteComponentA();
    auto componentB = ConcreteComponentB();

    auto visitor1 = ConcreteVisitor1();
    auto visitor2 = ConcreteVisitor2();

    std::cout << "The client code works with all visitors via the base Visitor interface:\n";

    componentA.Accept(&visitor1);
    componentB.Accept(&visitor1);

    std::cout << "It allows the same client code to work with different types of visitors:\n";

    componentA.Accept(&visitor2);
    componentB.Accept(&visitor2);

    return 0;
}
