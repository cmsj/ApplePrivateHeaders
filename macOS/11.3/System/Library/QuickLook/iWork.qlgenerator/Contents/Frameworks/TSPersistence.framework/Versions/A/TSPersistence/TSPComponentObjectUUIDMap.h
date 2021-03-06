/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying> {

	IdentifierMap<NSUUID *>* _identifierToUUIDMap;
	NSUUIDMap<long long>* _uuidToIdentifierMap;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithMessage:(const RepeatedPtrField<TSP::ObjectUUIDMapEntry>*)arg1 ;
-(void)saveToMessage:(RepeatedPtrField<TSP::ObjectUUIDMapEntry>*)arg1 ;
-(void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectUUIDForIdentifier:(long long)arg1 ;
-(long long)identifierForObjectUUID:(id)arg1 ;
-(id)initWithComponentObjectUUIDMap:(id)arg1 ;
@end

