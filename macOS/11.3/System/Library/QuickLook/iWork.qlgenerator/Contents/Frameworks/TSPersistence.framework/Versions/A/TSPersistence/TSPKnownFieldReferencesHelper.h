/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class TSPLazyReferenceArray, NSArray;

@interface TSPKnownFieldReferencesHelper : NSObject {

	RepeatedField<long long>* _objectReferences;
	RepeatedField<long long>* _dataReferences;
	TSPLazyReferenceArray* _strongObjects;
	TSPLazyReferenceArray* _weakObjects;
	NSArray* _allData;

}
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)processFieldDescriptor:(const FieldDescriptor*)arg1 message:(const Message*)arg2 reflection:(const Reflection*)arg3 ;
-(void)processFieldsFromMessage:(const Message*)arg1 messageDescriptor:(const Descriptor*)arg2 reflection:(const Reflection*)arg3 ;
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 message:(const Message*)arg2 reflection:(const Reflection*)arg3 ;
@end

