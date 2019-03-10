import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    ListView {
        id: mylistview
        width: parent.width
        height: 100
        focus: true
        keyNavigationWraps: true
        highlight: Rectangle { color: "lightsteelblue" ; radius: 5 }
        model: ["Sunday","Monday","Tuesday","Thursday","Friday","Saturday"]
        delegate: Text { text: model.modelData }
         onCurrentItemChanged: { console.log("value = "+mylistview.currentIndex)


         }
    }


    Component.onCompleted: {

    }

}
