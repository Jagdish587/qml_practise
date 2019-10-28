import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MouseArea {
        id: mousearea
        anchors.fill: parent
        onClicked: {
            root.width = parent.width / 4
            root.height = parent.height / 4
        }
    }

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
    }

    Rectangle {
        id: roottopleft
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.bottom: root.top
        anchors.right: root.left
    }

    Rectangle {
        id: roottophcentre
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.bottom: root.top
        anchors.horizontalCenter: root.horizontalCenter
    }

    Rectangle {
        id: roottopright
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.bottom: root.top
        anchors.left: root.right
    }

    Rectangle {
        id: rootleftvcentre
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.right: root.left
        anchors.verticalCenter: root.verticalCenter
    }

    Rectangle {
        id: rootrighttvcentre
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.left: root.right
        anchors.verticalCenter: root.verticalCenter
    }

    Rectangle {
        id: rootleftbottom
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.right: root.left
        anchors.top: root.bottom
    }

    Rectangle {
        id: rootbottomhcentre
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.top: root.bottom
        anchors.horizontalCenter: root.horizontalCenter
    }

    Rectangle {
        id: rootbottom
        width: root.width / 4
        height: root.height / 4
        color: "red"
        anchors.left: root.right
        anchors.top: root.bottom
    }
}
