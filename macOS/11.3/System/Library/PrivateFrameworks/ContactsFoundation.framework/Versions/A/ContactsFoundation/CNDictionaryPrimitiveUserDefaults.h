/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNPrimitiveUserDefaults.h>

@class NSMutableDictionary, NSString;

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {

	NSMutableDictionary* _preferences;
	unsigned long long _synchronizeCount;
	unsigned long long _setupAutosyncCount;

}

@property (readonly) unsigned long long synchronizeCount;                //@synthesize synchronizeCount=_synchronizeCount - In the implementation block
@property (readonly) unsigned long long setupAutosyncCount;              //@synthesize setupAutosyncCount=_setupAutosyncCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)synchronize;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(char*)arg2 ;
-(char)primitiveBoolValueForKey:(id)arg1 keyExists:(char*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(unsigned long long)synchronizeCount;
-(unsigned long long)setupAutosyncCount;
@end

