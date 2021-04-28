/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SkyLight.framework/Versions/A/SkyLight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMapTable;

@interface SLSecureCursorAssertionManager : NSObject {

	NSHashTable* _strongAssertionUUIDs;
	NSMapTable* _weakAssertionMap;

}

@property (nonatomic,readonly) NSHashTable * strongAssertionUUIDs;              //@synthesize strongAssertionUUIDs=_strongAssertionUUIDs - In the implementation block
@property (nonatomic,readonly) NSMapTable * weakAssertionMap;                   //@synthesize weakAssertionMap=_weakAssertionMap - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(NSHashTable *)strongAssertionUUIDs;
-(NSMapTable *)weakAssertionMap;
-(id)takeAssertion;
-(void)invalidateAll;
-(void)invalidateUUID:(id)arg1 ;
-(void)unmapUUID:(id)arg1 ;
@end
