import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: root
        width: parent.width / 2
        height: parent.height / 2
        color: "green"
        anchors.centerIn: parent
    }

    Rectangle {
        id: redroot
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.centerIn: root
        radius: width * 0.5
    }

    Rectangle {
        id: yellowroot
        width: root.width / 4
        height: root.height / 4
        color: "yellow"
        anchors.top: root.bottom
        anchors.left: root.right
    }

    Rectangle {
        id: redroottop
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.left: root.right
        anchors.bottom: root.top
        anchors.topMargin: 10
    }
}
