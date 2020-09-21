/*****************************************/
/*      This file is autogenerated       */
/*   Any manual changes will be LOST!    */
/*****************************************/
/* Generated 2002-01-03 16:51:12         */
/*****************************************/
/* This file should be stored in the     */
/* same directory as the form/datamodule */
/* with the corresponding model          */
/*****************************************/
/* Copyright notice:                     */
/*                                       */
/*****************************************/

#if !defined (DataValidationExampleClasses_HPP)
#define DataValidationExampleClasses_HPP

// interface uses

// interface dependancies

// attribute dependancies
#include "BoldAttributes.hpp"

#include <Classes.hpp>
#include <Controls.hpp>
#include <SysUtils.hpp>
#include "BoldDefs.hpp"
#include "BoldSubscription.hpp"
#include "BoldDeriver.hpp"
#include "BoldElements.hpp"
#include "BoldDomainElement.hpp"
#include "BoldSystemRT.hpp"
#include "BoldSystem.hpp"

void unregisterCode();

// forward declarations of all classes }

class TBusinessClassesRoot;
class TBusinessClassesRootList;
class TRoom;
class TRoomList;
class TStudent;
class TStudentList;
class TFemaleStudent;
class TFemaleStudentList;
class TMaleStudent;
class TMaleStudentList;

class DELPHICLASS TBusinessClassesRoot;
class TBusinessClassesRoot : public Boldsystem::TBoldObject
{
typedef Boldsystem::TBoldObject inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TBusinessClassesRoot(Boldsystem::TBoldSystem* aBoldSystem) : Boldsystem::TBoldObject(aBoldSystem, true) { }
  #pragma option pop

};

class DELPHICLASS TRoom;
class TRoom : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAInteger* __fastcall _Get_M_RoomNumber();
  Integer __fastcall _GetRoomNumber();
  void __fastcall _SetRoomNumber(Integer NewValue);
  TBAInteger* __fastcall _Get_M_NumberOfBeds();
  Integer __fastcall _GetNumberOfBeds();
  void __fastcall _SetNumberOfBeds(Integer NewValue);
  TStudentList* __fastcall _GetInhabitants();
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TRoom(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  boolean __fastcall ValidateNewInhabitant(TStudent* NewInhabitant);
  void __fastcall CompleteCreate(void);
  __property TBAInteger* M_RoomNumber = {read=_Get_M_RoomNumber};
  __property TBAInteger* M_NumberOfBeds = {read=_Get_M_NumberOfBeds};
  __property TStudentList* M_Inhabitants = {read=_GetInhabitants};
  __property Integer RoomNumber = {read=_GetRoomNumber, write=_SetRoomNumber};
  __property Integer NumberOfBeds = {read=_GetNumberOfBeds, write=_SetNumberOfBeds};
  __property TStudentList* Inhabitants = {read=_GetInhabitants};
};

class DELPHICLASS TStudent;
class TStudent : public TBusinessClassesRoot
{
typedef TBusinessClassesRoot inherited;
private:
  TBAString* __fastcall _Get_M_Name();
  String __fastcall _GetName();
  void __fastcall _SetName(String NewValue);
  TRoom* __fastcall _GetLivesIn();
  TBoldObjectReference* __fastcall _Get_M_LivesIn();
  void __fastcall _SetLivesIn(TRoom *value);
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TStudent(Boldsystem::TBoldSystem* aBoldSystem) : TBusinessClassesRoot(aBoldSystem) { }
  #pragma option pop

  __property TBAString* M_Name = {read=_Get_M_Name};
  __property TBoldObjectReference* M_LivesIn = {read=_Get_M_LivesIn};
  __property String Name = {read=_GetName, write=_SetName};
  __property TRoom* LivesIn = {read=_GetLivesIn, write=_SetLivesIn};
};

class DELPHICLASS TFemaleStudent;
class TFemaleStudent : public TStudent
{
typedef TStudent inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TFemaleStudent(Boldsystem::TBoldSystem* aBoldSystem) : TStudent(aBoldSystem) { }
  #pragma option pop

  void __fastcall CompleteCreate(void);
};

class DELPHICLASS TMaleStudent;
class TMaleStudent : public TStudent
{
typedef TStudent inherited;
private:
protected:
public:
  #pragma option push -w-inl
  inline __fastcall TMaleStudent(Boldsystem::TBoldSystem* aBoldSystem) : TStudent(aBoldSystem) { }
  #pragma option pop

  void __fastcall CompleteCreate(void);
};

class DELPHICLASS TBusinessClassesRootList;
class TBusinessClassesRootList : public TBoldObjectList
{
protected:
  TBusinessClassesRoot* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TBusinessClassesRoot *NewObject);
public:
  int __fastcall Includes(TBusinessClassesRoot *anObject);
  int __fastcall IndexOf(TBusinessClassesRoot *anObject);
  void __fastcall Add(TBusinessClassesRoot *NewObject);
  TBusinessClassesRoot* __fastcall AddNew();
  void __fastcall Insert(int index, TBusinessClassesRoot *NewObject);
  __property TBusinessClassesRoot* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TRoomList;
class TRoomList : public TBusinessClassesRootList
{
protected:
  TRoom* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TRoom *NewObject);
public:
  int __fastcall Includes(TRoom *anObject);
  int __fastcall IndexOf(TRoom *anObject);
  void __fastcall Add(TRoom *NewObject);
  TRoom* __fastcall AddNew();
  void __fastcall Insert(int index, TRoom *NewObject);
  __property TRoom* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TStudentList;
class TStudentList : public TBusinessClassesRootList
{
protected:
  TStudent* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TStudent *NewObject);
public:
  int __fastcall Includes(TStudent *anObject);
  int __fastcall IndexOf(TStudent *anObject);
  void __fastcall Add(TStudent *NewObject);
  TStudent* __fastcall AddNew();
  void __fastcall Insert(int index, TStudent *NewObject);
  __property TStudent* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TFemaleStudentList;
class TFemaleStudentList : public TStudentList
{
protected:
  TFemaleStudent* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TFemaleStudent *NewObject);
public:
  int __fastcall Includes(TFemaleStudent *anObject);
  int __fastcall IndexOf(TFemaleStudent *anObject);
  void __fastcall Add(TFemaleStudent *NewObject);
  TFemaleStudent* __fastcall AddNew();
  void __fastcall Insert(int index, TFemaleStudent *NewObject);
  __property TFemaleStudent* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};

class DELPHICLASS TMaleStudentList;
class TMaleStudentList : public TStudentList
{
protected:
  TMaleStudent* __fastcall GetBoldObject(int index);
  void __fastcall SetBoldObject(int index, TMaleStudent *NewObject);
public:
  int __fastcall Includes(TMaleStudent *anObject);
  int __fastcall IndexOf(TMaleStudent *anObject);
  void __fastcall Add(TMaleStudent *NewObject);
  TMaleStudent* __fastcall AddNew();
  void __fastcall Insert(int index, TMaleStudent *NewObject);
  __property TMaleStudent* BoldObjects[int index] = {read=GetBoldObject, write=SetBoldObject};
};


char* GeneratedCodeCRC();

#endif
 