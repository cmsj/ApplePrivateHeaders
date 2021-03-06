/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, NSNumber;

@interface ASDAppUsageStats : NSObject <NSCopying> {

	char _isExtensionUsage;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _clipBundleID;
	NSURL* _clipFullURL;
	NSString* _clipLaunchReason;
	NSString* _clipReferrerURL;
	NSString* _clipReferrerBundleID;
	NSString* _clipWebAppBundleID;
	NSString* _containingBundleID;
	NSDate* _endDate;
	long long _eventTime;
	NSNumber* _evid;
	NSNumber* _itemID;
	NSString* _itemName;
	NSDate* _lastEventEndDate;
	NSString* _launchReason;
	NSString* _sourceStream;
	NSDate* _startDate;
	long long _usageTime;
	long long _usageCount;

}

@property (nonatomic,copy) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * clipBundleID;                      //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (nonatomic,copy) NSURL * clipFullURL;                          //@synthesize clipFullURL=_clipFullURL - In the implementation block
@property (nonatomic,copy) NSString * clipLaunchReason;                  //@synthesize clipLaunchReason=_clipLaunchReason - In the implementation block
@property (nonatomic,copy) NSString * clipReferrerURL;                   //@synthesize clipReferrerURL=_clipReferrerURL - In the implementation block
@property (nonatomic,copy) NSString * clipReferrerBundleID;              //@synthesize clipReferrerBundleID=_clipReferrerBundleID - In the implementation block
@property (nonatomic,copy) NSString * clipWebAppBundleID;                //@synthesize clipWebAppBundleID=_clipWebAppBundleID - In the implementation block
@property (nonatomic,copy) NSString * containingBundleID;                //@synthesize containingBundleID=_containingBundleID - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long eventTime;                        //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) NSNumber * evid;                              //@synthesize evid=_evid - In the implementation block
@property (assign,nonatomic) char isExtensionUsage;                      //@synthesize isExtensionUsage=_isExtensionUsage - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                            //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                          //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSDate * lastEventEndDate;                    //@synthesize lastEventEndDate=_lastEventEndDate - In the implementation block
@property (nonatomic,copy) NSString * launchReason;                      //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy) NSString * sourceStream;                      //@synthesize sourceStream=_sourceStream - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long usageTime;                        //@synthesize usageTime=_usageTime - In the implementation block
@property (assign,nonatomic) long long usageCount;                       //@synthesize usageCount=_usageCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSString *)itemName;
-(NSString *)bundleVersion;
-(NSString *)launchReason;
-(void)setLaunchReason:(NSString *)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)clipBundleID;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setEventTime:(long long)arg1 ;
-(long long)eventTime;
-(void)setItemName:(NSString *)arg1 ;
-(long long)usageCount;
-(void)setUsageCount:(long long)arg1 ;
-(void)setIsExtensionUsage:(char)arg1 ;
-(void)setContainingBundleID:(NSString *)arg1 ;
-(void)setSourceStream:(NSString *)arg1 ;
-(void)setUsageTime:(long long)arg1 ;
-(void)setEvid:(NSNumber *)arg1 ;
-(long long)usageTime;
-(void)setLastEventEndDate:(NSDate *)arg1 ;
-(id)_formatTimeInternal:(long long)arg1 ;
-(id)_formatShortDate:(id)arg1 ;
-(void)setClipBundleID:(NSString *)arg1 ;
-(NSURL *)clipFullURL;
-(void)setClipFullURL:(NSURL *)arg1 ;
-(NSString *)clipLaunchReason;
-(void)setClipLaunchReason:(NSString *)arg1 ;
-(NSString *)clipReferrerURL;
-(void)setClipReferrerURL:(NSString *)arg1 ;
-(NSString *)clipReferrerBundleID;
-(void)setClipReferrerBundleID:(NSString *)arg1 ;
-(NSString *)clipWebAppBundleID;
-(void)setClipWebAppBundleID:(NSString *)arg1 ;
-(NSString *)containingBundleID;
-(NSNumber *)evid;
-(char)isExtensionUsage;
-(NSDate *)lastEventEndDate;
-(NSString *)sourceStream;
@end

