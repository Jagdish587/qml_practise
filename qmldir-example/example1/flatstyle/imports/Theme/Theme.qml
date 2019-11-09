import QtQuick 2.12

Item {
    id: name
    property int myname: 20

    Rectangle {
        id: myrec
        width: 140
        height: 140
        anchors.centerIn: parent
        color: "red"
    }

    Component.onCompleted: {
        console.log("Hello New Jagdish Theme.qml loaded ")
    }
}
