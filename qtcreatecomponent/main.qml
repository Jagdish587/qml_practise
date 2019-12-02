import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: mywindow
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    property var mycomponenet: ""
    property var buttonobj: ""

    function createqmlobj() {
        mycomponenet = Qt.createComponent("MyButton.qml")

        if (mycomponenet.status === Component.Ready) {
            console.log("componenet created ")
            buttonobj = mycomponenet.createObject(mywindow) // create a qml obj
            if (buttonobj == null)
                console.log("button obj failed ")
            else
                console.log("button obj created")
        }
    }

    Component.onCompleted: {
        console.log("main.qml loaded")
        createqmlobj() // let's create a qml object
    }
}
