/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentHistoryTransaction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {

	long long _rowIdentifier;
	double _timestamp;
	NSArray* _changes;
	NSString* _storeID;
	NSString* _bundleID;
	NSString* _processID;
	NSString* _contextName;
	NSString* _author;
	NSData* _queryGeneration;
	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectID* _backingObjectID;

}
+(char)supportsSecureCoding;
-(id)initialQueryGenerationToken;
-(id)postQueryGenerationToken;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bundleID;
-(id)changes;
-(id)token;
-(id)timestamp;
-(id)contextName;
-(id)author;
-(long long)transactionNumber;
-(id)objectIDNotification;
-(id)processID;
-(id)storeID;
@end
