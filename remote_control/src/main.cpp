#include <QApplication>
#include "ui_remote_control.h"
#include "remote_control.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    RemoteControl window(nullptr);
    Ui::MainWindow remote_control;
    remote_control.setupUi(&window);
    window.volume = remote_control.volume;
    window.channel = remote_control.channel;
    window.show();
    return QApplication::exec();
}
