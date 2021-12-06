import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12

Window {
    width: 640
    height: 480
    minimumWidth: 640
    minimumHeight: 480
    visible: true
    title: qsTr("Player")

    Button{
        id: play
        anchors.bottom: parent.bottom
        anchors.bottomMargin: progress.height
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -stop.width - pause.width
        text: "▶️"
    }

    Button{
        id: pause
        anchors.bottom: parent.bottom
        anchors.bottomMargin: progress.height
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -stop.width
        text: "⏸️"
    }

    Button{
        id: stop
        anchors.bottom: parent.bottom
        anchors.bottomMargin: progress.height
        anchors.horizontalCenter: parent.horizontalCenter
        text: "⏹"
    }

    Button{
        id: rewind
        anchors.bottom: parent.bottom
        anchors.bottomMargin: progress.height
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: stop.width        
        text: "⏪️"
    }

    Button{
        id: forward
        anchors.bottom: parent.bottom
        anchors.bottomMargin: progress.height
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: stop.width + rewind.width        
        text: "⏩️"
    }

    ProgressBar{
        id: progress
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        width: play.width + pause.width + stop.width + rewind.width + forward.width
        height: stop.height
    }
}
