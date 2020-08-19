import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    function myQmlFunction() {
        console.log("Jagdish inside myQmlFunction ")
    }

        Component.onCompleted: {
            console.log("Jagdish main.qml loaded ")
        }

    }
