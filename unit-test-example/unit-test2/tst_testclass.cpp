#include <QtTest>

// add necessary includes here
#include "myclass.h"

class TestClass : public QObject
{
  Q_OBJECT

 public:
  TestClass();
  ~TestClass();

  MyClass myclassobj;


 private slots:
  void initTestCase();
  void cleanupTestCase();
  void test_case1();
  void test_case2();


};

TestClass::TestClass()
{

}

TestClass::~TestClass()
{

}

void TestClass::initTestCase()
{

}

void TestClass::cleanupTestCase()
{

}

void TestClass::test_case1()
{
  QVERIFY(myclassobj.add(5,4) == 9);
}

void TestClass::test_case2()
{
  QVERIFY(myclassobj.add(5,4) == 20);
}

QTEST_APPLESS_MAIN(TestClass)

#include "tst_testclass.moc"
