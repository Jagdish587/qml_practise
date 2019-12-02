import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: rect
        width: 100
        color: "yellow"
    }


    /*When creating a property binding from JavaScript, the this keyword can be used to refer to the object which receives the binding.
    * This is helpful for resolving ambiguities with property names.
      */
    Component.onCompleted: {
        rect.height = Qt.binding(function () {
            return this.width * 2
        })
        console.log("rect.height = " + rect.height) // prints 200, not 640*2
    }
}
