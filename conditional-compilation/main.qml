import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: myrect
        width: 40
        height: 40
    }

    Component.onCompleted: {
        if (UBUNTU_MODE)
            console.log("Jagdish in ubuntu ")
        else
            console.log("Jagdish in target ")
    }
}
