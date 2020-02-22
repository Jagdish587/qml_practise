import QtQuick 2.0

Item {

    id: myitem
    width: 640
    height: 380
    Rectangle {
        id: myrect
        width: 120
        height: 120
        color: "red"
        radius: 4
        objectName: "myrect"
    }

    Component.onCompleted: {
        console.log("Jagdish MyItem.qml loaded ")
    }
}
