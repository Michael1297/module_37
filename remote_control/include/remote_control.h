#pragma once
#include <QMainWindow>
#include <QtWidgets/QLCDNumber>

class RemoteControl : public QMainWindow{
    Q_OBJECT
public:
    QLCDNumber* volume = nullptr;
    QLCDNumber* channel = nullptr;
    RemoteControl(QMainWindow* parent = nullptr) : QMainWindow(parent){};
public slots:
    void channel0(){channel->display(0);};
    void channel1(){channel->display(1);};
    void channel2(){channel->display(2);};
    void channel3(){channel->display(3);};
    void channel4(){channel->display(4);};
    void channel5(){channel->display(5);};
    void channel6(){channel->display(6);};
    void channel7(){channel->display(7);};
    void channel8(){channel->display(8);};
    void channel9(){channel->display(9);};
    void channel_next(){channel->display(channel->intValue() + 1);};

    void channel_past(){
        if(channel->intValue() > 0) channel->display(channel->intValue() - 1);
    };

    void volume_up(){
        if(volume->intValue() < 100) volume->display(volume->intValue() + 10);
    };

    void volume_down(){
        if(volume->intValue() > 0) volume->display(volume->intValue() - 10);
    };
};