/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/Versions/A/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSUUID, NSNumber, NSSet, MapsSyncManagedMixinMapItem;

@interface MapsSyncManagedFavoriteItem : NSManagedObject

@property (copy,nonatomic) NSDate * createTime; 
@property (copy,nonatomic) NSString * customName; 
@property (assign,nonatomic) char hidden; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSDate * modificationTime; 
@property (copy,nonatomic) NSString * originatingAddressString; 
@property (assign,nonatomic) long long positionIndex; 
@property (copy,nonatomic) NSString * shortcutIdentifier; 
@property (assign,nonatomic) short source; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) short version; 
@property (retain,nonatomic) NSNumber * muid; 
@property (retain,nonatomic) NSNumber * longitude; 
@property (retain,nonatomic) NSNumber * latitude; 
@property (retain,nonatomic) NSSet * contactHandles; 
@property (retain,nonatomic) MapsSyncManagedMixinMapItem * mapItem; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

