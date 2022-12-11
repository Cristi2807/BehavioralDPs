cmake_minimum_required(VERSION 3.24)
project(BehavioralDPs)

set(CMAKE_CXX_STANDARD 23)

add_executable(BehavioralDPs main.cpp
        ChainOfResponsibility/Handler.cpp
        ChainOfResponsibility/Request.cpp
        ChainOfResponsibility/AbstractHandler.cpp
        ChainOfResponsibility/UsernameHandler.cpp
        ChainOfResponsibility/PasswordHandler.cpp
        ChainOfResponsibility/TimeHandler.cpp

        Command/Command.cpp
        Command/SimpleCommand.cpp
        Command/Receiver.cpp
        Command/ComplexCommand.cpp
        Command/Invoker.cpp

        Mediator/Mediator.cpp
        Mediator/BaseComponent.cpp
        Mediator/Component1.cpp
        Mediator/Component2.cpp
        Mediator/ConcreteMediator.cpp

        Memento/Memento.cpp
        Memento/ConcreteMemento.cpp
        Memento/Originator.cpp
        Memento/Caretaker.cpp

        Observer/IObserver.cpp
        Observer/ISubject.cpp
        Observer/Subject.cpp
        Observer/Observer.cpp

        State/State.cpp
        State/Context.cpp
        State/ConcreteStateA.cpp
        State/ConcreteStateB.cpp

        Strategy/Strategy.cpp
        Strategy/ContextStrategy.cpp
        Strategy/ConcreteStrategyA.cpp
        Strategy/ConcreteStrategyB.cpp

        Visitor/Visitor.cpp
        Visitor/Component.cpp
        Visitor/ConcreteComponentA.cpp
        Visitor/ConcreteComponentB.cpp
        Visitor/ConcreteVisitor1.cpp
        Visitor/ConcreteVisitor2.cpp)
