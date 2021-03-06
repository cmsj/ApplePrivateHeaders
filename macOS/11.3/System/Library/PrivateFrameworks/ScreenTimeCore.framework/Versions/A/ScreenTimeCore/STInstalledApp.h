/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, STUserDeviceState, NSData;

@interface STInstalledApp : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,retain) STUserDeviceState * userDeviceState; 
@property (assign,nonatomic) char installedLocally; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSData * iconData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializableClassName;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)bundleIdentifiersInstalledForDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(void)setUserDeviceState:(STUserDeviceState *)arg1 ;
@end

