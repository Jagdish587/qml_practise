import QtQuick 2.0

Item {

    signal myvaluechanged(string mystr)

    onMyvaluechanged: {
        console.log("onMyvaluechanged called " + mystr)
    }

    Component.onCompleted: {
        console.log("Jagdish MyItem.qml loaded")
    }
}
