#include "mainwindow.h"
//#include "pilotmanager.h"
#include "serialclass.h"

#include <QApplication>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>


int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //serialclass * serial = new serialclass("COM3", QSerialPort::Baud9600, QSerialPort::OneStop, QSerialPort::NoFlowControl, QSerialPort::Data8);
    QByteArray array;
    array[0] = 0x0a;
//    serial -> write(array);
//    qDebug(serial -> serialdata);

    /* connect serial signal to getNewSerialData slot */
    //MainWindow *pilot_ui = new MainWindow;
//    QObject::connect(serial, SIGNAL(newSerialDataRead(mavlink_message_t)),
//                     w, SLOT(decodeNewSerialData(mavlink_message_t)));

//    qDebug() << "HELLO";
//    serial->kevin_test();

//    QObject::connect(w, SIGNAL(newDecodedData(char*,POGI_Message_IDs_e)),
//                     w, SLOT(updateWidget(char*,POGI_Message_IDs_e)));

    qDebug() << "HELLOO";
    return a.exec();
}
